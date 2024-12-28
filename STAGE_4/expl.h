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
#define ELSE_NODE 12
#define WHILE_NODE 13
#define BREAK_NODE 14
#define CONTINUE_NODE 15
#define DO_WHILE_NODE 16
#define STRING_TYPE 17
#define ARRAY_NODE 18



typedef struct Gsymbol
{
    char *name;  // name of the variable
    int type;    // type of the variable
    int size;    // size of the variable
    int binding; // stores the static memory address allocated to the variable
    int row;     // for 1D arrays and 2D arrays
    int col;     // for 2D arrays
    struct Gsymbol *next;
}Gsymbol;

typedef struct tnode
{
    int val;                    // For NUM nodes
    int type;                   // type of variable
    char *varname;              // for ID nodes(initialisation)
    int nodetype;               // info aboout non leaf Nodes
    char *op;                   // indicates the opertor
    int size;                   //size of variable
    int row;                    //row for 1D /2D ARRAYS
    int col;                    //col for 2D Arrays
    struct Gsymbol* Gentry;
    struct tnode *left, *right; // left and right branches
} tnode;

extern Gsymbol* G_symbol_table;
extern int binding_pos;

struct Gsymbol* LookUp(char* varName);

void G_Install(char* name,int type,int row,int col);

void print_GSymbolTable();

struct tnode *createNode(int val,int row,int col, int type, char *c, char *varname, int nodeType, tnode *l, tnode *r);

struct tnode *makeNonLeafNode(struct tnode *l, struct tnode *r, int nodeType, char *op);

struct tnode *makeNUMNode(int n);

struct tnode *makeIDNode(char *varname);

/*Make a tnode with opertor, left and right branches set*/
struct tnode *makeOperatorNode(char c, struct tnode *l, struct tnode *r);

/*To evaluate an expression tree*/
extern int stack_storage[26];
int evaluator(struct tnode *t);