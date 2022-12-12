#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *left;
    struct node *right;
};
//*********************************
struct node * makenode(char x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

//*******************************

void preordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        printf(" %c ",t->data);
        preordertraversal(t->left);
        preordertraversal(t->right);
    }
}

void postordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        postordertraversal(t->right);
        postordertraversal(t->left);
        printf(" %c ",t->data);
    }
}

void inordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        inordertraversal(t->left);
        printf(" %c ",t->data);
        inordertraversal(t->right);
    }
}

void main()
{
    struct node *root=NULL;
    root=makenode('A');
    root->left=makenode('B');
    root->right=makenode('C');
    root->left->left=makenode('F');
    root->right->left=makenode('D');
    root->right->right=makenode('E');
    printf("preorder traverseal is ");
    
    preordertraversal(root);
    
    printf("\n");
    printf("inorder traverseal is ");
    inordertraversal(root);
    printf("\n");
    printf("postorder traverseal is ");
    postordertraversal(root);
}
