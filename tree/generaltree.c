#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *child;
    struct node *sibling;
};
//*********************************
struct node * makenode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->child=NULL;
    p->sibling=NULL;
    return p;
}

//**********************************************************
 createtree(struct node **t)
{
    int choice ,x;
    struct node *p;
    printf("wheater the child of %d exist? (1/0",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of left of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->child=p;
        createtree(&p);
    }
     printf("wheater the sibling of %d exist? (1/0",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of right of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->sibling=p;
        createtree(&p);
    }
}
//*****************************************************

void preordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        printf(" %d ",t->data);
        preordertraversal(t->child);
        preordertraversal(t->sibling);
    }
}

void postordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        postordertraversal(t->child);
        postordertraversal(t->sibling);
        printf(" %d ",t->data);
    }
}

void inordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        inordertraversal(t->child);
        printf(" %d ",t->data);
        inordertraversal(t->sibling);
    }
}

//******************************************************

void main()
{
    struct node *root=NULL;
    int x;
    printf("enter the data of the root\n");
    scanf("%d",&x);
    root=makenode(x);
    createtree(&root);
    inordertraversal(root);
        
}
