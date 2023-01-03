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
//*******************************************************************
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

void insert(struct node **t,int x)
{
    struct node *p,*q;
    p=*t;
    q=NULL;
    if(*t==NULL)
    {
        *t=makenode(x);
    }
    else{
    while(p!=NULL)
    {
        if(x<p->data)
        {
            q=p;
            p=p->left;
        }
        else
        {
            q=p;
            p=p->right;

        }
    }
        if(x<q->data)
        {
            q->left=makenode(x);

        }
        else
        {
            q->right=makenode(x);
        }
    
    }
    
}
//****************************************
int main()
{
    struct node *root=NULL;

    int a[10]={2,34,54,6,35,77,87,56,30,22};
    root=makenode(a[0]);
    for(int i=1;i<=9;i++)
    {
        insert(&root,a[i]);
    }
     inordertraversal(root);
    
                 
               


}