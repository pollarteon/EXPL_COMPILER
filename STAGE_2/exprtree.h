#define IDNode 1
#define NUMNode 2
#define readNode 3
#define connectorNode 4
#define writeNode 5
#define operatorNode 6
#define integerType 7


typedef struct tnode{
 int val; //For NUM nodes
 int type; //type of variable
 char* varname;//for ID nodes
 int nodetype;//info aboout non leaf Nodes
 char *op; //indicates the opertor
 struct tnode *left,*right; //left and right branches
 }tnode;

struct tnode* createTree(int val,int type,char* c,struct tnode* l,struct tnode* r);

struct tnode* makeNonLeafNode(struct tnode* l,struct tnode* r,int nodeType,char op);

struct tnode* makeNUMNode(int n);

struct tnode* makeIDNode(char* varname);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

/*To evaluate an expression tree*/
int evaluate(struct tnode *t);