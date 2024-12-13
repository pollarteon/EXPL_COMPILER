// #include "exprtree.h"


struct tnode* createTree(int val,int type,char* c ,struct tnode* l,struct tnode* r){
    struct tnode* temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type = -1;
    temp->op = c;
    temp->val = val;
    temp->left =l;
    temp->right = r;
    temp->varname=NULL;
    temp->nodetype=type;
    return temp;
}

struct tnode *makeNUMNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->type = INTEGER_TYPE;
    temp->val = n; //useful for NUM Node
    temp->op = NULL;
    temp->nodetype = CONST_NODE;
    temp->varname = NULL;
    temp->left = NULL;
    temp->right = NULL;
    // printf("MADE NUM NODE: %d\n",temp->val);
    return temp;
}

struct tnode* makeIDNode(char* varName){
    struct tnode* temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type = INTEGER_TYPE;
    temp->val = -1;
    temp->left=NULL;
    temp->right=NULL;
    temp->op=NULL;
    temp->val=-1;
    temp->nodetype = IDENTIFIER_NODE;
    temp->varname = varName; //useful for Identifier Node
    // printf("MADE ID NODE: %c\n",*(temp->varname));
    return temp;
}

struct tnode* makeNonLeafNode(struct tnode* l,struct tnode* r,int nodeType,char op){
    struct tnode* temp;
    temp = (struct tnode*) malloc(sizeof(struct tnode));
    temp->val=-1;
    temp->nodetype=nodeType;
    temp->type = -1;
    temp->varname = NULL;
    if(temp->nodetype==OPERATOR_NODE){
        temp->op = malloc(sizeof(char));
        *(temp->op) = op;
    }else{
        temp->op=NULL;
    }
    temp->left=l;
    temp->right=r;
    return temp;
}

// int evaluate(struct tnode *t)
// {
//     if (t->op == NULL)
//     {
//         return t->val;
//     }
//     else
//     {
//         switch (*(t->op))
//         {
//         case '+':
//             return evaluate(t->left) + evaluate(t->right);
//             break;
//         case '-':
//             return evaluate(t->left) - evaluate(t->right);
//             break;
//         case '*':
//             return evaluate(t->left) * evaluate(t->right);
//             break;
//         case '/':
//             return evaluate(t->left) / evaluate(t->right);
//             break;
//         }
//     }
// }

void preorder(struct tnode* root){

    if(root==NULL) return;
    if(root->nodetype==OPERATOR_NODE){
        printf("%c ",*(root->op));
    }
    else if(root->nodetype==CONNECTOR_NODE){
        printf("connector ");
    }
    else if (root->nodetype==READ_NODE){
        printf("read ");
    }
    else if(root->nodetype==WRITE_NODE){
        printf("write ");
    }
    else if(root->val!=-1){
        printf("%d ",root->val);
    }
    else if (root->varname!=NULL){
        printf("%c ",*(root->varname));
    }
    preorder(root->left);
    preorder(root->right);
    return;
}

void postorder(struct tnode* root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    if(root->op!=NULL){
        printf("%c ",*root->op);
    }else{
        printf("%d ",root->val);
    }
    return;
}