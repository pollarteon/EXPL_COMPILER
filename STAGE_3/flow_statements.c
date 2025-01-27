// #include "flow_statements.h"
// #include <string.h>

struct tnode *createTree(int val, int type, char *c, struct tnode *l, struct tnode *r)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = -1;
    temp->op = c;
    temp->val = val;
    temp->left = l;
    temp->right = r;
    temp->varname = NULL;
    temp->nodetype = type;
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
    temp->varname = varName; // useful for Identifier Node
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
    if (temp->nodetype == OPERATOR_NODE)
    {

        temp->op = op;
        if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "/") == 0 || strcmp(op, "*") == 0)
        {
            temp->type = INTEGER_TYPE;
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
    else if (temp->nodetype == IF_NODE || temp->nodetype == WHILE_NODE || temp->nodetype==DO_WHILE_NODE || temp->nodetype==REPEAT_UNTIL_NODE)
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
        int isbreak;
        if (evaluator(t->left))
        {
            if (t->right->nodetype == ELSE_NODE)
            {
                isbreak =evaluator(t->right->left);
                if(isbreak==-2) return -2;
                if(isbreak==-3) return -3;
                return -1;
            }
            else
            {
                isbreak =evaluator(t->right);
                if(isbreak==-2) return -2;
                if(isbreak==-3) return -3;
                return -1;
            }
        }
        else
        {
            if (t->right->nodetype == ELSE_NODE)
            {
                isbreak =evaluator(t->right->right);
                if(isbreak==-2) return -2;
                if(isbreak==-3) return -3;
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
            int isbreak =evaluator(t->right);
            if(isbreak==-2)return -1;
            evaluator(t);
            return -1;
        }else{
            return -1;
        }
    }
    else if(t->nodetype==REPEAT_UNTIL_NODE){
        int isbreak =evaluator(t->right);
        if(isbreak==-2){
            return -1;
        }
        if(evaluator(t->left)==0){
            evaluator(t);
            return -1;
        }else{
            return -1;
        }
    }
    else if(t->nodetype==DO_WHILE_NODE){
        int isbreak =evaluator(t->right);
        if(isbreak==-2){
            return -1;
        }
        if(evaluator(t->left)){
            evaluator(t);
            return -1;
        }else{
            return -1;
        }
    }
    else if(t->nodetype==BREAK_NODE){
        return -2;
    }
    else if(t->nodetype==CONTINUE_NODE){
        return -3;
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
        int leftval = evaluator(t->left);
        if(leftval==-2) return -2; //if left subtree is a break/continue node
        else if(leftval==-3) return -3;
        int rightval =evaluator(t->right);
        if(rightval==-2)return -2; //if right subtree is a break/continue node
        else if(rightval==-3)return -3;
        return -1;
    }

    return -1;
}

void preorder(struct tnode *root)
{

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
    else if(root->nodetype==REPEAT_UNTIL_NODE){
        printf("repeat-until ");
    }
    else if (root->val != -1)
    {
        printf("%d ", root->val);
    }
    else if (root->varname != NULL)
    {
        printf("%c ", *(root->varname));
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