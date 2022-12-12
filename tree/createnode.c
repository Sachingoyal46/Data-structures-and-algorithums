#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
//*********************************
struct node * makenode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

//**********************************************************
createtree(struct node **t)
{
    int choice ,x;
    struct node *p;
    printf("wheater the left of %d exist? (1/0",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of left of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->left=p;
        createtree(&p);
    }
     printf("wheater the right of %d exist? (1/0",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of right of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->right=p;
        createtree(&p);
    }
}
//*****************************************************

void preordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        printf(" %d ",t->data);
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
        printf(" %d ",t->data);
    }
}

void inordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        inordertraversal(t->left);
        printf(" %d ",t->data);
        inordertraversal(t->right);
    }
}

void main()
{
    struct node *root=NULL;
    int x;
    printf("enter the data of the root\n");
    scanf("%d",&x);
    root=makenode(x);
    createtree(&root);
    preordertraversal(root);
    inordertraversal(root);
    postordertraversal(root);
    // root=makenode('A');
    // root->left=makenode('B');
    // root->right=makenode('C');
    // root->left->left=makenode('F');
    // root->right->left=makenode('D');
    // root->right->right=makenode('E');
    // printf("preorder traverseal is ");
    
    // preordertraversal(root);
    
    // printf("\n");
    // printf("inorder traverseal is ");
    // inordertraversal(root);
    // printf("\n");
    // printf("postorder traverseal is ");
    // postordertraversal(root);
}
