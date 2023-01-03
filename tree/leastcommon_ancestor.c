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
//************************************
int max(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
//***********************************
int height(struct node *t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        if(t->left==NULL && t->right==NULL)
        {
            return 1;
        }
        else
        {
            return (max(height(t->left),height(t->right)))+1;
        }
    }
}

//*****************************
int diameter(struct node *t)
{   
    int d1,d2,d3;
    int k;
    if(t==NULL)
    return 0;
    else
    {
        d1=height(t->left) +height(t->right) +1;
        d2=diameter(t->left);
        d3=diameter(t->right);
        int m=max(d1,d2);
        k=max(m,d3);




    }
    return k;
}
//***************************************************
int maximal_pathsum(struct node *t)
{
    int m;
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        if(t->left==NULL && t->right==NULL)
        return t->data;

        else
        {
            int l=maximal_pathsum(t->left);
            int r=maximal_pathsum(t->right);
            m=max(l,r);
        }
        
    }
    return t->data +m;

}
//*****************************************
int leastcommon_ancestor(struct node *t,int x,int y)
{   
    int l,r;
    if(t==NULL)
    return NULL;
    else
    {
        if(t->data==x || t->data==y)
        {
            return t;
        }
        else
        {
             l=leastcommon_ancestor(t->left,x,y);
             r=leastcommon_ancestor(t->right,x,y);
              if(l==NULL)
        {
            return r;
        }
        else if(r==NULL)
        return l;
        else
        return t;

        }
       
    }
}

void main()
{
    struct node *root=NULL;
    int m,s,t,y,x;
    printf("enter the data of the root\n");
    scanf("%d",&x);
    root=makenode(x);
    createtree(&root);
    //  t=diameter(root);
    // printf("diameter of the tree is %d\n",t);
    // s=maximal_pathsum(root);
    // printf("maximal_pathsum is %d",s);
    printf("enter the value of x and y\n");
    scanf("%d %d",&m,&y);
    t=leastcommon_ancestor(root,m,y);
    printf("the least common ansector is %d",t);
}
