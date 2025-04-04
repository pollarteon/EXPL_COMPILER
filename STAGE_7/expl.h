#define ID_NODE 1
#define NUM_NODE 2
#define READ_NODE 3
#define CONNECTOR_NODE 4
#define WRITE_NODE 5
#define OPERATOR_NODE 6
#define CONST_NODE 7
#define IDENTIFIER_NODE 8
#define INTEGER_TYPE 9
#define BOOLEAN_TYPE 10
#define IF_NODE 11
#define IF_ELSE_NODE 12
#define WHILE_NODE 13
#define BREAK_NODE 14
#define CONTINUE_NODE 15
#define DO_WHILE_NODE 16
#define STRING_TYPE 17
#define ARRAY_NODE 18
#define _2D_ARRAY_NODE 19
#define POINTER_TYPE 22
#define POINTER_INT_TYPE 20
#define POINTER_STR_TYPE 21
#define ADDRESS_NODE 22
#define DEREFERENCE_NODE 23
#define FUNCTION_NODE 24
#define RETURN_NODE 25
#define BREAKPOINT_NODE 26
#define FIELD_NODE 27
#define INITIALIZE_NODE 28
#define ALLOC_NODE 29
#define FREE_NODE 30
#define NULL_NODE 31
#define NEW_NODE 32
#define DELETE_NODE 33
#define SELF_NODE 34

typedef struct ParamList
{
    char* name;
    struct Typetable* type;
    struct ParamList* next;
}ParamList;

typedef struct FuncArgs
{
    struct tnode* arguement;
    struct FuncArgs* next;
}FuncArgs;

typedef struct Gsymbol
{
    char *name;  // name of the variable
    struct Typetable* type;    // type of the variable
    struct Classtable* Ctype; //class of the variable
    int size;    // size of the variable
    int binding; // stores the static memory address allocated to the variable
    int row;     // for 1D arrays and 2D arrays
    int col;     // for 2D arrays
    struct ParamList* param_list;
    int flabel;
    struct Gsymbol *next;
}Gsymbol;

typedef struct Lsymbol
{
    char* name;
    struct Typetable* type;
    int binding;
    int isArg;
    struct Lsymbol* next;
}Lsymbol;

typedef struct Typetable{
    char *name;
    int size;
    struct Fieldlist* fields;
    struct Typetable *next;
}Typetable;

typedef struct Fieldlist{
    char* name;
    int fieldIndex;
    struct Typetable* type;
    struct Classtable *ctype;
    struct Fieldlist *next;
}Fieldlist;

typedef struct Classtable{
    char* name;
    struct Fieldlist * memberField;
    struct Memberfunclist *Vfuncptr;
    int class_index;
    int field_count;
    int method_count;
    struct Classtable* next;
}Classtable;

typedef struct Memberfunclist{
    char* name;
    struct Typetable* type;
    struct ParamList* paramlist;
    int Funcposition;
    int Flabel;
    struct Memberfunclist* next;
}Memberfunclist;

typedef struct tnode
{
    int val;                    // For NUM nodes
    char *varname;              // for ID nodes(initialisation) / FUNCTION_NODES / for storing the FIELD names
    int nodetype;               // info about non leaf Nodes
    char *op;                   // indicates the opertor
    int size;                   //size of variable
    int row;                    //row for 1D /2D ARRAYS
    int col;                    //col for 2D Arrays
    struct FuncArgs* argList; // for function call (can be used for checking function signatures)
    struct Gsymbol* Gentry;
    struct Lsymbol* Lentry;
    struct tnode *left, *right, *middle; // left and right branches , middle for if-else node
    struct Typetable* type;
    struct Classtable* Ctype;
} tnode;

typedef struct IdList
{
    char* name;
    struct IdList* next;
}IdList;


//======================================================================================================================
extern int inside_class ;

//======================================================================================================================
extern Gsymbol* G_symbol_table;
extern int binding_pos;
extern int flabel;

struct Gsymbol* GLookUp(char* varName);

void G_Install(char* name,Typetable* type,int row,int col,struct ParamList* param_list,int flabel);

void print_GSymbolTable();

//======================================================================================================================

extern struct Classtable* class_table;
extern struct Classtable* cptr;
extern int class_field_index;
extern int member_function_pos;

struct Classtable* CInstall(char* name,char* parent_class_name);

struct Classtable* Clookup(char* name);


void Class_Minstall(struct Classtable* cptr,char* name,struct Typetable* type,struct ParamList* Paramlist);

void Class_Finstall(struct Classtable* cptr,struct Fieldlist* field);

struct Memberfunclist* Class_Mlookup(struct Classtable* Ctype,char* name);

struct Fieldlist* Class_Flookup(struct Classtable* CType,char* name);

void Print_Classtable();

void Print_VirtFuncTable(struct Classtable* class);
//======================================================================================================================

extern int local_binding;
extern int param_binding;
extern int self_binded;
extern Lsymbol* Ltable;

void L_Install(char* name,Typetable* type,int isArg);

struct Lsymbol* LLookUp(char* name);

void L_cleanup();

void print_Ltable();

//======================================================================================================================
struct tnode *createNode(int val,int row,int col, Typetable* type, char *c, char *varname, int nodeType, tnode *l, tnode *r);

struct tnode *makeNonLeafNode(struct tnode *l, struct tnode *r, int nodeType, char *op);

struct tnode *makeNUMNode(int n);

struct tnode *makeIDNode(char *varname);

//------------------------------------------------------------
 
struct ParamList* create_param_list(Typetable* type,char* name);

struct ParamList* append_param_list(struct ParamList* head,struct ParamList* new_elem);

struct FuncArgs* create_arglist(struct tnode* arg);

struct FuncArgs* append_arglist(struct FuncArgs* head, struct tnode* arg);

struct FuncArgs* reverse_arglist(struct FuncArgs* head);

int verify_func_signature(struct FuncArgs* arg_list,struct ParamList* param_list);

void print_param_list(struct ParamList* head);

void print_arglist(struct FuncArgs* head);
//----------------------------------------------------------------
//Type Table methods

extern struct Typetable* Type_table;

void TypeTableCreate();

struct Typetable* TLookup(char* name);

struct Typetable* Tinstall(char* name,int size,struct Fieldlist *fields);

struct Fieldlist* FLookup(struct Typetable *type, char *name);

struct Fieldlist* Finstall(struct Fieldlist* fields,struct Fieldlist* field);

struct Fieldlist* Fcreate(char* name,int fieldIndex,struct Typetable* type,struct Classtable* ctype);

int GetSize(struct Typetable *type);

void PrintTypeTable();

void PrintFieldlist(struct Fieldlist* fieldlist);

//----------------------------------------------------------------
int field_validifier(struct tnode* field_node);

int check_identifier(struct tnode* t);

int returnStmt_checker(struct tnode* t,Typetable* type);

int methodlist_validifier(struct ClassTable* class);

void preorder(struct tnode* t);
// /*Make a tnode with opertor, left and right branches set*/
// struct tnode *makeOperatorNode(char c, struct tnode *l, struct tnode *r);

// /*To evaluate an expression tree*/
// extern int stack_storage[26];
// int evaluator(struct tnode *t);