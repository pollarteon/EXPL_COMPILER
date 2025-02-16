// #include "expl.h"



struct tnode *createNode(int val, int row, int col, Typetable* type, char *c, char *varname, int nodeType, struct tnode *l, struct tnode *r)
{
    // printf("Hello\n");
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = type;
    temp->op = c;
    temp->val = val;
    temp->left = l;
    temp->right = r;
    temp->middle = NULL;
    temp->size = row * col;
    temp->row = row;
    temp->col = col;
    temp->varname = varname ? strdup(varname) : NULL;
    temp->nodetype = nodeType;
    temp->Gentry = NULL;
    temp->Lentry = NULL;
    temp->argList = NULL;
    return temp;
}

struct tnode *makeNUMNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = TLookup("int");
    temp->val = n; // useful for NUM Node
    temp->op = NULL;
    temp->nodetype = CONST_NODE;
    temp->varname = NULL;
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->Gentry = NULL;
    temp->Lentry = NULL;
    temp->argList = NULL;
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
    temp->type = NULL;
    temp->val = -1;
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->op = NULL;
    temp->val = -1;
    temp->nodetype = IDENTIFIER_NODE;
    temp->varname = strdup(varName); // useful for Identifier Node
    temp->Gentry = NULL;
    temp->Lentry = NULL;
    temp->argList = NULL;
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
    temp->type = NULL;
    temp->varname = NULL;
    temp->op = NULL;
    temp->Gentry = NULL;
    temp->Lentry = NULL;
    temp->argList = NULL;
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
            if (strcmp(l->type->name,"pointer(int)")==0)
            {
                if(strcmp(r->type->name,"int")!=0 ){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = TLookup("pointer(int)");
            }
            else if (strcmp(l->type->name,"pointer(str)")==0)
            {
                if(strcmp(r->type->name,"int")!=0 ){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = TLookup("pointer(str)");
            }
            else if (strcmp(r->type->name,"pointer(int)")==0)
            {
                if(strcmp(l->type->name,"int")!=0){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = TLookup("pointer(int)");
            }
            else if (strcmp(r->type->name,"pointer(str)")==0)
            {
                if(strcmp(l->type->name,"int")!=0){
                    printf("ERROR: TYPE MISMATCH\n");
                    exit(1);
                }
                is_pointer=1;
                temp->type = TLookup("pointer(str)");
            }
            else{
                temp->type = TLookup("int");
            }
            if(is_pointer && (strcmp(op,"/")==0|| strcmp(op,"%")==0||strcmp(op,"*")==0)){
                printf("ERROR: INVALID OPERATION IN POINTER ARITHMETIC\n");
                exit(1);
            }
            int l_flag = 0;
            int r_flag = 0;

            if (l->nodetype == IDENTIFIER_NODE) {
                struct Gsymbol* Gentry = l->Gentry;
                struct Lsymbol* Lentry = l->Lentry;

                if (Lentry != NULL) { // Local variable
                    if (strcmp(Lentry->type->name,"int")!=0 && strcmp(Lentry->type->name,"pointer(int)")!=0) {
                        l_flag = 1;
                    }
                } else if (Gentry != NULL) { // Global variable
                    if (strcmp(Gentry->type->name,"int")!=0 && strcmp(Gentry->type->name,"pointer(int)")!=0) {
                        l_flag = 1;
                    }
                }
            }

            if (r->nodetype == IDENTIFIER_NODE) {
                struct Gsymbol* Gentry = r->Gentry;
                struct Lsymbol* Lentry = r->Lentry;

                if (Lentry != NULL) { // Local variable
                    if (strcmp(Lentry->type->name,"int")!=0 && strcmp(Lentry->type->name,"pointer(int)")!=0) {
                        r_flag = 1;
                    }
                } else if (Gentry != NULL) { // Global variable
                    if (strcmp(Gentry->type->name,"int")!=0 && strcmp(Gentry->type->name,"pointer(int)")!=0) {
                        r_flag = 1;
                    }
                }
            }

            if (l_flag == 1 || r_flag == 1 || strcmp(l->type->name,"str")==0 || strcmp(r->type->name,"str")==0 ) {
                printf("%d %d \n", l_flag, r_flag);
                printf("\n\nERROR: NON-INTEGER TYPE IN ARITHMETIC OPERATION\n\n");
                exit(1);
            }
        }
        else if (strcmp(op, "=") != 0)
        {
            temp->type = TLookup("bool");
        }
        else // assignment operator
        {
            // struct Lsymbol* left_Lentry = l->Lentry;
            // if(left_Lentry!=NULL){
            //     if(left_Lentry->isArg){
            //         printf("ERROR cannot assign value to an arguement : %s\n",left_Lentry->name);
            //         exit(1);
            //     }
            // }
            if(l->nodetype ==  ADDRESS_NODE){
                printf("ERROR: & is an lval operator\n");
                exit(1);
            }
            if (strcmp(l->type->name,r->type->name)) //types are not matching
            {
                printf("%s\n", temp->op);
                printf("%s %s\n", l->type->name, r->type->name);
                printf("TYPE ERROR:\n");
                exit(1);
            }
        }
        // printf("%s\n", temp->op);
        // printf("%d %d\n", l->type, r->type);
        if (strcmp(l->type->name,r->type->name) && (( strcmp(l->type->name,"str")==0 || strcmp(r->type->name,"str") )))
        {
            printf("%s\n", temp->op);
            printf("%s %s\n", l->type->name, r->type->name);
            printf("TYPE ERROR:\n");
            exit(1);
        }
    }
    else if (temp->nodetype == IF_NODE || temp->nodetype == WHILE_NODE || temp->nodetype == DO_WHILE_NODE || temp->nodetype==IF_ELSE_NODE)
    {
        if (strcmp(l->type->name,"bool")) //if gaurd expression node is not an boolean type
        {
            printf("TYPE ERROR IN CONDITION : \n");
            exit(1);
        }
    }
    else if (temp->nodetype == ARRAY_NODE)
    {
        struct Gsymbol *Gentry = l->Gentry;
        if(Gentry==NULL){
            printf("ERROR: ACCESSING AN ARRAY NOT DECLARED AS A GLOBAL VARIABLE: %s\n",l->varname);
            exit(1);
        }
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
            struct Lsymbol *index_Lentry = r->Lentry;
            struct Gsymbol *index_Gentry = r->Gentry;
            // printf("%d\n",index_Gentry->type);
            if(index_Lentry && strcmp(index_Lentry->type->name,"int")!=0){
                printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                exit(1);
            }
            else if (index_Gentry && strcmp(index_Gentry->type->name,"int")!=0)
            {
                printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                exit(1);
            }
            if(index_Lentry)
            temp->type = index_Lentry->type;
            else
            temp->type = index_Gentry->type;
            
        }
        else if(r->nodetype==OPERATOR_NODE){
            temp->type = r->type;
        }
        else if(r->nodetype==FUNCTION_NODE){
            struct Gsymbol* Gentry = r->left->Gentry;
            if(strcmp(Gentry->type->name,"int")!=0 ){// if function return value is not an integer
                printf("ERROR: CANNOT INDEX ARRAY USING A NON_INTEGER TYPE: %s\n",Gentry->name);
                exit(1);
            }
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
            else if(_2D_node->left->nodetype ==ARRAY_NODE){
                struct Gsymbol* index_Gentry = _2D_node->left->left->Gentry;
                if(strcmp(index_Gentry->type->name,"int")!=0){
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
                temp->type=Gentry->type;
            }
            else if(_2D_node->left->nodetype == OPERATOR_NODE){
                temp->type=_2D_node->left->type;
            }
            else
            {
                struct Lsymbol *index_Lentry = _2D_node->left->Lentry;
                struct Gsymbol *index_Gentry = _2D_node->left->Gentry;
                if(index_Lentry && strcmp(index_Lentry->type->name,"int")!=0){
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
                else if (index_Gentry && strcmp(index_Gentry->type->name,"int")!=0)
                {
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
                if(index_Lentry)
                temp->type = index_Lentry->type;
                else
                temp->type = index_Gentry->type;
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
            else if(_2D_node->right->nodetype ==ARRAY_NODE){
                struct Gsymbol* index_Gentry = _2D_node->right->left->Gentry;
                if(strcmp(index_Gentry->type->name,"int")!=0){
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
                temp->type=Gentry->type;
            }
            else if(_2D_node->right->nodetype == OPERATOR_NODE){
                temp->type=_2D_node->right->type;
            }
            else
            {
                struct Lsymbol *index_Lentry = _2D_node->right->Lentry;
                struct Gsymbol *index_Gentry = _2D_node->right->Gentry;
                if(index_Lentry && strcmp(index_Lentry->type->name,"int")!=0){
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
                else if (index_Gentry && strcmp(index_Gentry->type->name,"int")!=0)
                {
                    printf("ERROR: INDEXING BY A NON_INTEGER VALUE\n");
                    exit(1);
                }
                if(index_Lentry)
                temp->type = index_Lentry->type;
                else
                temp->type = index_Gentry->type;
            }
            temp->type = Gentry->type;
        }
    }
    temp->left = l;
    temp->right = r;
    temp->middle = NULL;
    return temp;
}
//----------TYPE TABLE FUNCTIONS --------------------------

struct Typetable * Type_table = NULL;

void TypeTableCreate(){
    Type_table = Tinstall("int",1,NULL);
    Type_table = Tinstall("str",1,NULL);
    Type_table = Tinstall("bool",1,NULL);
    Type_table = Tinstall("void",0,NULL);
    Type_table = Tinstall("pointer",0,NULL);
    Type_table = Tinstall("pointer(int)",0,NULL);
    Type_table = Tinstall("pointer(str)",0,NULL);
}

struct Typetable* Tinstall(char* name,int size ,struct Fieldlist* fields){
    Typetable *entry = (Typetable*)malloc(sizeof(Typetable));
    entry->name = strdup(name);
    entry->size = size;
    entry->fields = fields;
    entry->next=NULL;
    if(Type_table==NULL){
        return entry;
    }
    Typetable* temp = Type_table;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = entry;
    return Type_table;
}

struct Typetable* TLookup(char* name){
    struct Typetable* temp = Type_table;
    if(Type_table==NULL) return NULL;
    while(temp!=NULL && strcmp(name,temp->name)!=0) temp=temp->next;
    return temp;
}

void PrintTypeTable(){
    Typetable* temp = Type_table;
    printf("---------------------TYPE_TABLE--------------------\n");
    while(temp!=NULL){
        printf("|--%s--|",temp->name);
        temp=temp->next;
    }
    printf("\n\n");
    return ;
}

//----------GLOBAL SYMBOL TABLE FUNCTIONS --------------------------

Gsymbol *G_symbol_table = NULL;
int binding_pos = 4096;
int flabel =0;

struct Gsymbol *GLookUp(char *Identifier)
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
void G_Install(char *name, Typetable* type, int row, int col,struct ParamList* param_list,int flabel)
{
    Gsymbol *new_Entry = (Gsymbol *)malloc(sizeof(Gsymbol));
    new_Entry->name = strdup(name);
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
    new_Entry->param_list = param_list;
    new_Entry->flabel = flabel;
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
    printf("---------------------------------------GLOBAL SYMBOL TABLE---------------------------------------\n");
    if (temp == NULL)
        printf("---------------------------empty-----------------------------\n");
    while (temp != NULL)
    {
        printf("%s:%d:%s (%d,%d) f_label:%d  |||  ", temp->name, temp->binding, temp->type->name, temp->row, temp->col,temp->flabel);
        temp = temp->next;
    }
    printf("\n\n");
};
//============================================================================
//IDENTIFIER CHECKING AND SETTING UP / ADDITIONAL SEMANTIC CHECKING FUNCTIONS

int check_identifier(struct tnode* IDnode){
    // printf("%s\n",IDnode->Gentry);
    struct Gsymbol* Gentry = IDnode->Gentry;
    struct Lsymbol* Lentry = IDnode->Lentry;
    if(IDnode->nodetype==ARRAY_NODE){
        Gentry=IDnode->left->Gentry;
        Lentry=IDnode->left->Lentry;
    }
    if(Lentry==NULL && Gentry==NULL){      
            printf("ERROR: variable not declared: %s\n",IDnode->varname);
            exit(1);
    }
    if(Lentry!=NULL){
        IDnode->type=Lentry->type;
        return 2;
    }
    
    if(Gentry!=NULL){
        IDnode->type=Gentry->type;
    return 1;
    } 
}

int returnStmt_checker(struct tnode* t,Typetable* type){
    if(t==NULL){
        return 1;
    }
    if(t->nodetype==RETURN_NODE){
        Typetable* expression_type = t->left->type;
        if(strcmp(expression_type->name,type->name)!=0){
            printf("ERROR: RETURN TYPE MISMATCH WITH FUNCTION RETURN TYPE: \n");
            exit(1);
        }
    }
    returnStmt_checker(t->left,type);
    returnStmt_checker(t->right,type);
}


//============================================================================
//LOCAL SYMBOL TABLE FUNCTIONS

Lsymbol *Ltable = NULL;
int local_binding=1;
int param_binding=1;

void L_Install(char* name,Typetable* type,int isArg){
    struct Lsymbol* Lentry = (Lsymbol*)malloc(sizeof(Lsymbol));
    Lentry->name = strdup(name);
    Lentry->type=type;
    Lentry->next=NULL;
    if(!isArg)
    Lentry->binding=local_binding++;
    else
    Lentry->binding=param_binding++;
    Lentry->isArg =isArg;
    struct Lsymbol* temp = Ltable;
    if(temp==NULL){
        Ltable = Lentry;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=Lentry;
    return ;
}

struct Lsymbol* LLookUp(char* name){
    if(Ltable==NULL)return NULL;
    struct Lsymbol* temp = Ltable;
    while(temp!=NULL){
        if(strcmp(temp->name,name)==0){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

void L_cleanup(){
    struct Lsymbol* temp;
    while (Ltable != NULL) {
        temp = Ltable;
        Ltable = Ltable->next;
        free(temp->name);  // Free the dynamically allocated name string
        free(temp);        // Free the node
    }
    return;
}

void print_Ltable(){
    struct Lsymbol* temp = Ltable;
    printf("---------------------------------------LOCAL SYMBOL TABLE---------------------------------------\n");
    if(temp==NULL){
        printf("----empty----\n");
        return;
    }
    while(temp!=NULL){
        printf("%s:%d:%s  |||  ", temp->name, temp->binding, temp->type->name);
        temp = temp->next;
    }
    printf("\n\n");
    return;
}


//============================================================================
//PARAM_LIST AND ARG_LIST FUNCTIONS

struct FuncArgs* create_arglist(struct tnode* arg){
    FuncArgs* arglist = (FuncArgs*)malloc(sizeof(FuncArgs));
    arglist->arguement = arg;
    arglist->next =NULL;
    return arglist;
}

struct FuncArgs*append_arglist(struct FuncArgs* head,struct tnode* arg){
    FuncArgs* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    FuncArgs* new_arg = create_arglist(arg);
    temp->next = new_arg;
    return head;
}
struct FuncArgs* reverse_arglist(struct FuncArgs* head) {
    struct FuncArgs* prev = NULL;
    struct FuncArgs* current = head;
    struct FuncArgs* next = NULL;

    while (current != NULL) {
        next = current->next;  
        current->next = prev; 
        prev = current;       
        current = next;        
    }
    return prev;  
}

void print_arglist(struct FuncArgs* head){
    FuncArgs* temp = head;
    while(temp!=NULL){
        preorder(temp->arguement);
        temp=temp->next;
    }
    return;
}

struct ParamList* create_param_list(Typetable* type,char* name){
    ParamList* new_param = (ParamList*)malloc(sizeof(ParamList));
    new_param->type = type;
    new_param->name = strdup(name);
    new_param->next=NULL;
    return new_param;
}
struct ParamList* append_param_list(ParamList* head,ParamList* new_param){
    if(head==NULL){
        return new_param;
    }
    ParamList* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_param;
    return head;
}

void print_param_list(struct ParamList* head){
    ParamList* temp = head;
    while(temp!=NULL){
        printf("%s ||| ",temp->name);
        temp=temp->next;
    }
    printf("\n\n");
    return;
}

int verify_func_signature(struct FuncArgs* arg_list,struct ParamList* param_list){
    struct FuncArgs* arg_scanner = arg_list;
    struct ParamList* param_scanner = param_list;
    while(arg_scanner!=NULL && param_scanner!=NULL){
        Typetable* param_type = param_scanner->type;
        Typetable* arg_type = arg_scanner->arguement->type;
        if(strcmp(param_type->name,arg_type->name)!=0)return 0;
        arg_scanner= arg_scanner->next;
        param_scanner=param_scanner->next;
    }
    if(arg_scanner==NULL && param_scanner==NULL)return 1;
    return 0;
}

//========================================================================================

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
    else if (root->nodetype == IF_ELSE_NODE)
    {
        printf("if-else ");
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
    else if(root->nodetype == FUNCTION_NODE){
        printf("function ");
        print_arglist(root->argList);
    }
    else if(root->nodetype==RETURN_NODE){
        printf("return ");
    }
    else if(root->nodetype==BREAKPOINT_NODE){
        printf("breakpoint ");
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
        if (strcmp(root->type->name,"int")==0)
            printf("%d ", root->val);
        else
            printf("%s ", root->varname);
    }
    else if (root->nodetype == IDENTIFIER_NODE)
    {
        if(root->Lentry)
            printf("%s ",root->Lentry->name);
        else if (root->Gentry)
            printf("%s ", root->Gentry->name);
    }
    preorder(root->left);
    preorder(root->right);
    preorder(root->middle);
    return;
}
