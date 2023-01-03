
#include <stdio.h>
#include <stdlib.h>
#define true 
#define false 
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int h;
};
//*********************************
struct node *makenode(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    p->h=0;
    return p;
}
//************************************************************************

inordertraversal(struct node *t)
{
    if(t!=NULL)
    {
        inordertraversal(t->left);
        printf(" %d ",t->data);
        inordertraversal(t->right);
    }
}
//**********************************************************************************
struct node *Rotateleft(struct node *x)
{
    struct node *y,*z;
    y=x->right;
    z=y->left;
    y->left=x;
    x->right=z;
    return y;

}
//***********************************************************************************
struct node *Rotateright(struct node *x)
{
    struct node *y,*z;
    y=x->left;
    z=y->right;
    y->right=x;
    x->left=z;
    return y;

}
//*********************************************************************************
struct node *LL(struct node *t)
{
    struct node *newroot;
    newroot=Rotateright(t);
    return newroot;
}
//********************************************************************************
struct node *RR(struct node *t)
{
    struct node *newroot;
    newroot=Rotateleft(t);
    return newroot;
}
//********************************************************************************
struct node *LR(struct node *x)
{
    struct node *y,*z ,*newroot;
    y=x->left;
    z=Rotateleft(y);
    x->left=z;
    newroot=Rotateright(x);
    return newroot;
}
//***************************************************************************
struct node *RL(struct node *x)
{
    struct node *y,*z ,*newroot;
    y=x->right;
    z=Rotateright(y);
    x->right=z;
    newroot=Rotateleft(x);
    return newroot;
}
//***************************************************************************
int Height(struct node *t)
{
    int hL,hr;
    if(t==NULL)
    {
        return 0;
    }
    if(t->left==NULL)
        hL=0;
        else
        {
            hL=1+t->left->h;
        }
        if(t->right==NULL)
        {
            hr=0;
        }
        else
        {
            hr=1+t->right->h;
        }
        return hL>hr?hL:hr;

}
//******************************************************
int Balancefactor(struct node *t)
{
    int hL,hr;
    if(t==NULL)
    {
        return 0;
    }
    if(t->left==NULL)
        hL=0;
        else
        {
            hL=1+t->left->h;
        }
        if(t->right==NULL)
        {
            hr=0;
        }
        else
        {
            hr=1+t->right->h;
        }
        return hL-hr;

}
//******************************************************

struct node *AVLInsert(struct node *t,int x)
{
    if(t==NULL)
    t=makenode(x);
    else
    {
        if(x<t->data)
        {
            t->left=AVLInsert(t->left,x);
            if(Balancefactor(t==2))
            {
                if(x<t->left->data)
                {
                    t=LL(t);
                }
                else
                t=LR(t);
            }

        }
        else
        {
            t->right=AVLInsert(t->right,x);
            if(Balancefactor(t)==-2)
            {
                if(x>t->right->data)
                {
                    t=RR(t);
                }
                else
                {
                    t=RL(t);
                }
                
            }

        }
    }
    t->h=Height(t);
    return t;
}
//************************************************************************************
int main()
{
    struct node *root = NULL;
    root=AVLInsert(root,100);
    root=AVLInsert(root,50);
    root=AVLInsert(root,40);
    root=AVLInsert(root,70);
    root=AVLInsert(root,150);
    root=AVLInsert(root,60);
    root=AVLInsert(root,10);

    inordertraversal(root);
    
    
     
    
   
   

}