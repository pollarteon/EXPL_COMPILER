

struct tnode *createNode(int val, int row, int col, int type, char *c, char *varname, int nodeType, struct tnode *l, struct tnode *r)
{
    // printf("Hello\n");
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = type;
    temp->op = c;
    temp->val = val;
    temp->left = l;
    temp->right = r;
    temp->size = row * col;
    temp->row = row;
    temp->col = col;
    temp->varname = varname ? strdup(varname) : NULL;
    temp->nodetype = nodeType;
    temp->Gentry = NULL;
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
    temp->Gentry = NULL;
    temp->size = 1;
    temp->row = 1;
    temp->col = 1;
    // printf("MADE NUM NODE: %d\n",temp->val);
    return temp;
}

struct tnode *makeIDNode(char *varName)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = -1;
    temp->val = -1;
    temp->left = NULL;
    temp->right = NULL;
    temp->op = NULL;
    temp->val = -1;
    temp->nodetype = IDENTIFIER_NODE;
    temp->varname = strdup(varName); // useful for Identifier Node
    temp->Gentry = NULL;
    temp->size = 1;
    temp->row = 1;
    temp->col = 1;
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
    temp->Gentry = NULL;
    temp->size = 1;
    temp->row = 1;
    temp->col = 1;
    if (temp->nodetype == OPERATOR_NODE)
    {
        int is_pointer =0;
        temp->op = op;

        if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "/") == 0 || strcmp(op, "*") == 0 || strcmp(op, "%") == 0)
        {
            // printf("%d %d\n",l->type,r->type);
            if (l->type == POINTER_INT_TYPE)
            {
                if(r->type !=INTEGER_TYPE){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = POINTER_INT_TYPE;
            }
            else if (l->type == POINTER_STR_TYPE)
            {
                if(r->type !=INTEGER_TYPE){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = POINTER_STR_TYPE;
            }
            else if (r->type == POINTER_INT_TYPE)
            {
                if(l->type !=INTEGER_TYPE){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = POINTER_INT_TYPE;
            }
            else if (r->type == POINTER_STR_TYPE)
            {
                if(l->type !=INTEGER_TYPE){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = POINTER_STR_TYPE;
            }
            else{
                temp->type = INTEGER_TYPE;
            }
            if(is_pointer && (strcmp(op,"/")==0|| strcmp(op,"%")==0||strcmp(op,"*")==0)){
                printf("ERROR: INVALID OPERATION IN POINTER ARITHMETIC\n");
                exit(1);
            }

            if ((l->nodetype == IDENTIFIER_NODE &&
                 (l->Gentry->type != INTEGER_TYPE && l->Gentry->type != POINTER_INT_TYPE)) ||
                (r->nodetype == IDENTIFIER_NODE && (r->Gentry->type != INTEGER_TYPE && r->Gentry->type != POINTER_INT_TYPE)) ||
                l->type == STRING_TYPE ||
                r->type == STRING_TYPE)
            {
                printf("\n\nERROR:NON-INTEGER TYPE IN ARITMETIC OPERATION\n\n");
                exit(1);
            }
        }
        else if (strcmp(op, "=") != 0)
        {
            temp->type = BOOLEAN_TYPE;
        }
        else // assignment operator
        {
            if(l->nodetype ==  ADDRESS_NODE){
                printf("ERROR: & is an lval operator\n");
                exit(1);
            }
            if (l->type != r->type)
            {
                printf("%s\n", temp->op);
                printf("%d %d\n", l->type, r->type);
                printf("TYPE ERROR:\n");
                exit(1);
            }
        }
        // printf("%s\n", temp->op);
        // printf("%d %d\n", l->type, r->type);
        if (l->type != r->type && ((l->type == STRING_TYPE || r->type == STRING_TYPE)))
        {
            printf("%s\n", temp->op);
            printf("%d %d\n", l->type, r->type);
            printf("TYPE ERROR:\n");
            exit(1);
        }
    }
    else if (temp->nodetype == IF_NODE || temp->nodetype == WHILE_NODE || temp->nodetype == DO_WHILE_NODE)
    {
        if (l->type != BOOLEAN_TYPE)
        {
            printf("TYPE ERROR IN CONDITION : \n");
            exit(1);
        }
    }
    else if (temp->nodetype == ARRAY_NODE)
    {
        struct Gsymbol *Gentry = l->Gentry;
        if (r->nodetype == CONST_NODE)
        {
            int index = r->val;
            if (index >= (Gentry->row))
            {
                printf("ERROR: INDEX OUT OF BOUNDS\n");
                exit(1);
            }
            temp->type = Gentry->type;
        }
        else if (r->nodetype == IDENTIFIER_NODE)
        {
            struct Gsymbol *index_Gentry = r->Gentry;
            // printf("%d\n",index_Gentry->type);
            if (index_Gentry->type != INTEGER_TYPE)
            {
                printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                exit(1);
            }
            temp->type = index_Gentry->type;
        }
        else if (r->nodetype == _2D_ARRAY_NODE)
        {
            struct tnode *_2D_node = r;

            if (_2D_node->left->nodetype == CONST_NODE)
            {
                int row_index = _2D_node->left->val;
                if (row_index >= (Gentry->row))
                {
                    printf("ERROR: INDEX OUT OF BOUNDS\n");
                    exit(1);
                }
            }
            else
            {
                struct Gsymbol *index_Gentry = _2D_node->left->Gentry;
                // printf("%d\n",index_Gentry->type);
                if (index_Gentry->type != INTEGER_TYPE)
                {
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
            }
            if (_2D_node->right->nodetype == CONST_NODE)
            {
                int row_index = _2D_node->right->val;
                if (row_index >= (Gentry->col))
                {
                    printf("ERROR: INDEX OUT OF BOUNDS\n");
                    exit(1);
                }
            }
            else
            {
                struct Gsymbol *index_Gentry = _2D_node->right->Gentry;
                // printf("%d\n",index_Gentry->type);
                if (index_Gentry->type != INTEGER_TYPE)
                {
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
            }
            temp->type = Gentry->type;
        }
    }
    temp->left = l;
    temp->right = r;
    return temp;
}

//----------GLOBAL SYMBOL TABLE FUNCTIONS --------------------------

Gsymbol *G_symbol_table = NULL;
int binding_pos = 4096;

struct Gsymbol *LookUp(char *Identifier)
{
    if (G_symbol_table == NULL)
        return NULL;
    Gsymbol *temp = G_symbol_table;
    while (temp != NULL && strcmp(temp->name, Identifier) != 0)
    {
        temp = temp->next;
    }
    if (temp == NULL)
        return NULL;
    return temp;
}
void G_Install(char *name, int type, int row, int col)
{
    Gsymbol *new_Entry = (Gsymbol *)malloc(sizeof(Gsymbol));
    if (new_Entry == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed in G_Install.\n");
        exit(1);
    }
    new_Entry->name = strdup(name);
    if (new_Entry->name == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed for variable name.\n");
        free(new_Entry);
        exit(1);
    }
    new_Entry->type = type;
    if (col == -1)
        new_Entry->size = row;
    else
        new_Entry->size = row * col;
    new_Entry->row = row;
    new_Entry->col = col;
    new_Entry->binding = binding_pos;
    if (col == -1)
        binding_pos += row;
    else
        binding_pos += row * col;
    new_Entry->next = NULL;

    if (G_symbol_table == NULL)
    {
        G_symbol_table = new_Entry;
    }
    else
    {
        Gsymbol *temp = G_symbol_table;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_Entry;
    }
}

void print_GSymbolTable()
{
    Gsymbol *temp = G_symbol_table;
    if (temp == NULL)
        printf("empty\n");
    while (temp != NULL)
    {
        printf("%s:%d:%d:%d (%d,%d)  |||  ", temp->name, temp->binding, temp->type, temp->size, temp->row, temp->col);
        temp = temp->next;
    }
    printf("\n");
};

// evaluator implementation  .....

int stack_storage[1024] = {0};


int evaluator(struct tnode *t)
{
    if (t == NULL)
        return -1;
    if (t->nodetype == READ_NODE)
    {
        if(t->left->nodetype==IDENTIFIER_NODE){
            struct Gsymbol* Gentry = t->left->Gentry;
            // printf("%s\n",Gentry->name);
            // printf("%d]\n",Gentry->binding-4096);
            scanf("%d", &stack_storage[Gentry->binding-4096]);
            return -1;
        }
        else if(t->left->nodetype==ARRAY_NODE){
            // printf("Array\n");
            struct tnode* array_node = t->left;
            struct Gsymbol* Gentry = array_node->left->Gentry;
            int address = Gentry->binding;
            if(array_node->right->nodetype!=_2D_ARRAY_NODE){
                address += evaluator(array_node->right);
            }
            else{
                struct tnode* _2D_array_node = array_node->right;
                address+= evaluator(_2D_array_node->left)*(Gentry->col);
                address+= evaluator(_2D_array_node->right);
            }
            scanf("%d",&stack_storage[(address)-4096]);
            return -1;
        }
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
        struct Gsymbol* Gentry = t->Gentry;
        return stack_storage[Gentry->binding-4096];
    }
    else if (t->nodetype ==ARRAY_NODE){
        struct Gsymbol* Gentry = t->left->Gentry;
        int address = Gentry->binding;
        if(t->right->nodetype!=_2D_ARRAY_NODE){
            address += evaluator(t->right);
            return stack_storage[address-4096];
        }
        else{
            struct tnode* _2D_array_node = t->right;
            address+= evaluator(_2D_array_node->left)*(Gentry->col);
            address+= evaluator(_2D_array_node->right);
            return stack_storage[address-4096];
        }
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
            if(t->left->nodetype==IDENTIFIER_NODE){         
                struct Gsymbol* Gentry = t->left->Gentry;
                stack_storage[Gentry->binding-4096] = result_val;
                return -1;
            }
            if(t->left->nodetype ==ARRAY_NODE){
                struct Gsymbol* Gentry = t->left->left->Gentry;
                int address = Gentry->binding;
                if(t->left->right->nodetype!=_2D_ARRAY_NODE){
                    address += evaluator(t->left->right);
                    stack_storage[address-4096]= result_val;
                    return -1;
                }
                else{
                    struct tnode* _2D_array_node = t->left->right;
                    address+= evaluator(_2D_array_node->left)*(Gentry->col);
                    address+= evaluator(_2D_array_node->right);
                    stack_storage[address-4096]= result_val;
                    return -1;
                }
            }
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
    else if (root->nodetype == BREAK_NODE)
    {
        printf("break ");
    }
    else if (root->nodetype == CONTINUE_NODE)
    {
        printf("continue ");
    }
    else if (root->nodetype == DO_WHILE_NODE)
    {
        printf("do-while ");
    }
    else if (root->nodetype == ARRAY_NODE)
    {
        printf("array ");
    }
    else if (root->nodetype == _2D_ARRAY_NODE)
    {
        printf("2d ");
    }
    else if (root->nodetype == ADDRESS_NODE)
    {
        printf("& ");
    }
    else if(root->nodetype == DEREFERENCE_NODE){
        printf("* ");
    }
    else if (root->nodetype == CONST_NODE)
    {
        if (root->type == INTEGER_TYPE)
            printf("%d ", root->val);
        else
            printf("%s ", root->varname);
    }
    else if (root->nodetype == IDENTIFIER_NODE)
    {
        if (root->Gentry)
            printf("%s ", root->Gentry->name);
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