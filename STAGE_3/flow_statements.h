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



typedef struct tnode{
 int val; //For NUM nodes
 int type; //type of variable
 char* varname;//for ID nodes
 int nodetype;//info aboout non leaf Nodes
 char *op; //indicates the opertor
 struct tnode *left,*right; //left and right branches
 }tnode;

struct tnode* createTree(int val,int type,char* c,struct tnode* l,struct tnode* r);

struct tnode* makeNonLeafNode(struct tnode* l,struct tnode* r,int nodeType,char* op);

struct tnode* makeNUMNode(int n);

struct tnode* makeIDNode(char* varname);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

/*To evaluate an expression tree*/
int evaluate(struct tnode *t);