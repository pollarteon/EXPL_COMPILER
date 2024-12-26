// #include "expl.h"
// #include <string.h>

struct tnode *createNode(int val, int type, char *c,char* varname,int nodeType, struct tnode *l, struct tnode *r)
{
    // printf("Hello\n");
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = type;
    temp->op = c;
    temp->val = val;
    temp->left = l;
    temp->right = r;
    temp->varname = varname ? strdup(varname) : NULL;
    temp->nodetype = nodeType;
    temp->Gentry=NULL;
    return temp;
}

struct tnode *makeNUMNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = INTEGER_TYPE;
    temp->val = n; // useful for NUM Node
    temp->op = NULL;
    temp->nodetype = CONST_NODE;
    temp->varname = NULL;
    temp->left = NULL;
    temp->right = NULL;
    temp->Gentry=NULL;
    // printf("MADE NUM NODE: %d\n",temp->val);
    return temp;
}

struct tnode *makeIDNode(char *varName)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = INTEGER_TYPE;
    temp->val = -1;
    temp->left = NULL;
    temp->right = NULL;
    temp->op = NULL;
    temp->val = -1;
    temp->nodetype = IDENTIFIER_NODE;
    temp->varname = strdup(varName); // useful for Identifier Node
    temp->Gentry=NULL;
    // printf("MADE ID NODE: %c\n",*(temp->varname));
    return temp;
}

struct tnode *makeNonLeafNode(struct tnode *l, struct tnode *r, int nodeType, char *op)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->val = -1;
    temp->nodetype = nodeType;
    temp->type = -1;
    temp->varname = NULL;
    temp->op = NULL;
    temp->Gentry=NULL;
    if (temp->nodetype == OPERATOR_NODE)
    {

        temp->op = op;
        if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "/") == 0 || strcmp(op, "*") == 0)
        {
            temp->type = INTEGER_TYPE;
            if((l->nodetype==IDENTIFIER_NODE && l->Gentry->type!=INTEGER_TYPE) 
            || (r->nodetype==IDENTIFIER_NODE && r->Gentry->type!=INTEGER_TYPE)){
                printf("\n\nERROR:NON-INTEGER TYPE IN ARITMETIC OPERATION\n\n");
                exit(1);
            }
        }
        else
        {
            temp->type = BOOLEAN_TYPE;
        }
        if (l->type != r->type)
        {
            printf("%d %d\n",l->type,r->type);
            printf("TYPE ERROR:\n");
            exit(1);
        }
    }
    else if (temp->nodetype == IF_NODE || temp->nodetype == WHILE_NODE || temp->nodetype==DO_WHILE_NODE)
    {
        if (l->type != BOOLEAN_TYPE)
        {
            printf("TYPE ERROR IN CONDITION : \n");
            exit(1);
        }
    }
    temp->left = l;
    temp->right = r;
    return temp;
}

//----------GLOBAL SYMBOL TABLE FUNCTIONS --------------------------

Gsymbol* G_symbol_table = NULL;
int binding_pos = 4096;



struct Gsymbol* LookUp(char* Identifier){
    if(G_symbol_table==NULL)return NULL;
    Gsymbol* temp = G_symbol_table;
    while(temp!=NULL && strcmp(temp->name,Identifier)!=0){
        temp=temp->next;
    }
    if(temp==NULL)return NULL;
    return temp;
}
void G_Install(char* name, int type, int size) {
    Gsymbol* new_Entry = (Gsymbol*)malloc(sizeof(Gsymbol));
    if (new_Entry == NULL) {
        fprintf(stderr, "Error: Memory allocation failed in G_Install.\n");
        exit(1);
    }
    new_Entry->name = strdup(name);
    if (new_Entry->name == NULL) {
        fprintf(stderr, "Error: Memory allocation failed for variable name.\n");
        free(new_Entry);
        exit(1);
    }
    new_Entry->type = type;
    new_Entry->size = size;
    new_Entry->binding = binding_pos;
    binding_pos += size;  // Adjust binding_pos for array size
    new_Entry->next = NULL;

    if (G_symbol_table == NULL) {
        G_symbol_table = new_Entry;
    } else {
        Gsymbol* temp = G_symbol_table;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_Entry;
    }
}

void print_GSymbolTable(){
    Gsymbol* temp = G_symbol_table;
    if(temp==NULL)printf("empty\n");
    while(temp!=NULL){
        printf("%s:%d:%d->",temp->name,temp->binding,temp->type);
        temp=temp->next;
    }
    printf("\n");
};

//evaluator implementation  .....

int stack_storage[26] = {0};

int evaluator(struct tnode *t)
{
    if (t == NULL)
        return -1;
    if (t->nodetype == READ_NODE)
    {
        char variable = *(t->left->varname);
        scanf("%d", &stack_storage[variable - 'a']);
        return -1;
    }
    else if (t->nodetype == WRITE_NODE)
    {
        printf("%d\n", evaluator(t->left));
        return -1;
    }
    else if (t->nodetype == CONST_NODE)
    {
        return t->val;
    }
    else if (t->nodetype == IDENTIFIER_NODE)
    {
        char identifer = *(t->varname);
        // printf("%d\n\n",identifer);
        return stack_storage[identifer - 'a'];
    }
    else if (t->nodetype == IF_NODE)
    {
        if (evaluator(t->left))
        {
            if (t->right->nodetype == ELSE_NODE)
            {
                evaluator(t->right->left);
                return -1;
            }
            else
            {
                evaluator(t->right);
                return -1;
            }
        }
        else
        {
            if (t->right->nodetype == ELSE_NODE)
            {
                evaluator(t->right->right);
                return -1;
            }
            else
            {
                return -1;
            }
        }
    }
    else if(t->nodetype == WHILE_NODE){
        if(evaluator(t->left)){
            evaluator(t->right);
            evaluator(t);
            return -1;
        }else{
            return -1;
        }
    }
    else if (t->nodetype == OPERATOR_NODE)
    {
        // if node is assignment operator
        if (strcmp(t->op, "=") == 0)
        {
            int result_val = evaluator(t->right);
            char identifer = *(t->left->varname);
            stack_storage[identifer - 'a'] = result_val;
            return -1;
        }

        int left_val = evaluator(t->left);
        int right_val = evaluator(t->right);
        int expression_val;
        if (strcmp(t->op, "+") == 0)
        {
            expression_val = left_val + right_val;
        }
        else if (strcmp(t->op, "-") == 0)
        {
            expression_val = left_val - right_val;
        }
        else if (strcmp(t->op, "*") == 0)
        {
            expression_val = left_val * right_val;
        }
        else if (strcmp(t->op, "/") == 0)
        {
            expression_val = left_val / right_val;
        }
        else if (strcmp(t->op, "<") == 0)
        {
            return (left_val < right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, ">") == 0)
        {
            return (left_val > right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, ">=") == 0)
        {
            return (left_val >= right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, "<=") == 0)
        {
            return (left_val <= right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, "&&") == 0)
        {
            return (left_val && right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, "||") == 0)
        {
            return (left_val || right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, "==") == 0)
        {
            return (left_val == right_val) ? 1 : 0;
        }
        else if (strcmp(t->op, "!=") == 0)
        {
            return (left_val != right_val) ? 1 : 0;
        }
        else
        {
            // Handle unknown operator error or add default behavior
            printf("Unknown operator: %s\n", t->op);
            exit(1);
        }
        return expression_val;
    }
    else
    {
        evaluator(t->left);
        evaluator(t->right);
        return -1;
    }

    return -1;
}

void preorder(struct tnode *root)
{
    // printf("Preordering\n");
    if (root == NULL)
        return;
    if (root->nodetype == OPERATOR_NODE)
    {
        printf("%s ", (root->op));
    }
    else if (root->nodetype == CONNECTOR_NODE)
    {
        printf("connector ");
    }
    else if (root->nodetype == READ_NODE)
    {
        printf("read ");
    }
    else if (root->nodetype == WRITE_NODE)
    {
        printf("write ");
    }
    else if (root->nodetype == IF_NODE)
    {
        printf("if ");
    }
    else if (root->nodetype == ELSE_NODE)
    {
        printf("else ");
    }
    else if (root->nodetype == WHILE_NODE)
    {
        printf("while ");
    }
    else if(root->nodetype==BREAK_NODE){
        printf("break ");
    }
    else if(root->nodetype==CONTINUE_NODE){
        printf("continue ");
    }
    else if(root->nodetype==DO_WHILE_NODE){
        printf("do-while ");
    }
    else if (root->val != -1)
    {
        printf("%d ", root->val);
    }
    else if (root->nodetype==IDENTIFIER_NODE)
    {
        if(root->Gentry)
        printf("%s ",root->Gentry->name);
    }
    preorder(root->left);
    preorder(root->right);
    return;
}

void postorder(struct tnode *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    if (root->op != NULL)
    {
        printf("%c ", *root->op);
    }
    else
    {
        printf("%d ", root->val);
    }
    return;
}