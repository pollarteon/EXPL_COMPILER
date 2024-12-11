// #include "exprtree.h"
struct tnode *makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode *makeOperatorNode(char c, struct tnode *l, struct tnode *r)
{
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(struct tnode *t)
{
    if (t->op == NULL)
    {
        return t->val;
    }
    else
    {
        switch (*(t->op))
        {
        case '+':
            return evaluate(t->left) + evaluate(t->right);
            break;
        case '-':
            return evaluate(t->left) - evaluate(t->right);
            break;
        case '*':
            return evaluate(t->left) * evaluate(t->right);
            break;
        case '/':
            return evaluate(t->left) / evaluate(t->right);
            break;
        }
    }
}

void preorder(struct tnode* root){
    if(root==NULL) return;
    if(root->op!=NULL){
        printf("%c ",*root->op);
    }else{
        printf("%d ",root->val);
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