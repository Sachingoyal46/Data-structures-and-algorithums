

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
//*********************************
struct node *makenode(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    p->father=NULL;
    return p;
}
//*******************************************************************
void preordertraversal(struct node *t)
{
    if (t != NULL)
    {
        printf(" %d ", t->data);
        preordertraversal(t->left);
        preordertraversal(t->right);
    }
}

void postordertraversal(struct node *t)
{
    if (t != NULL)
    {
        postordertraversal(t->right);
        postordertraversal(t->left);
        printf(" %d ", t->data);
    }
}

void inordertraversal(struct node *t)
{
    if (t != NULL)
    {
        inordertraversal(t->left);
        printf(" %d ", t->data);
        inordertraversal(t->right);
    }
}
//*********************************************

void bstinsert(struct node **t, int x)
{
    struct node *p, *q;
    p = *t;
    q = NULL;
    if (*t == NULL)
    {
        *t = makenode(x);
    }
    else
    {

        while (p != NULL)
        {
            if (x < p->data)
            {
                q = p;
                p = p->left;
            }
            else
            {
                q = p;
                p = p->right;
            }
        }
        if (x < q->data)
        {
            q->left = makenode(x);
        }
        else
        {
            q->right = makenode(x);
        }
    }
}
//****************************************
struct node *maximum(struct node *t)
{
    while (t->right != NULL)
    {
        t = t->right;
    }
    return t;
}
//********************************************
struct node *minimum(struct node *t)
{
    while (t->left != NULL)
    {
        t = t->left;
    }
    return t;
}
//**************************************
struct node *bst_search(struct node **t, int key)
{

    while (*t != NULL)
    {
        if ((*t)->data == key)
        {
            return *t;
        }
        else
        {

            if (key < (*t)->data)
                *t = (*t)->left;

            else

                *t = (*t)->right;
        }
    }
    return NULL;
}
//******************************************************

struct node *succesor(struct node *p)
{
    struct node *q;
    if (p->right != NULL)
    {
        q = minimum(p->right);
        return q;
    }
    else
        q = p->father;
    while (q != NULL && q->right == p)
    {
        p = q;
        q = q->father;
    }
    return q;
}
//***************************************************
struct node *predecessor(struct node *p)
{
    struct node *q;
    if (p->left != NULL)
    {
        q = maximum(p->left);
        return q;
    }
    else
        q = p->father;
    while (q != NULL && q->left == p)
    {
        p = q;
        q = q->father;
    }
    return q;
}
//*****************************************************8
int isleft(struct node *p)
{
    if(p->father!=NULL)
    {
        if(p->father->left==p)
        return true;
        else
        {
        return false;
        }
    }
    else
    return false;
}
//*****************************************************
 int isright(struct node *p)
{
    if(p->father!=NULL)
    {
        if(p->father->right==p)
        return true;
        else
        {
        return false;
        }
    }
    else
    return false;
}
//*****************************************************************
int BST_Delete(struct node**T,struct node*p){
    struct node*q,*l,*r,*c;
    q=p->father;
    if(p->left==NULL && p->right==NULL){
        if(q!=NULL){
            if(isleft(p)){
                q->left=NULL;
            }
            else{
                q->right=NULL;
            }
        }
        else{
            (*T)=NULL;
        }
        int x=p->data;
        free(p);
        return x;
    }
    else{
        if(p->left==NULL || p->right==NULL){
            l=p->left;
            r=p->right;
            if(l==NULL){
                c=r;
            }
            else{
                c=l;
            }
            if(isleft(p)){
                q->left=c;
            }
            else{
                q->right=c;
            }
            c->father=q;
            int x=p->data;
            free(p);
            return x;
        }
        else{
            q=succesor(p);
            int x=BST_Delete(T,q);
            p->data=x;
            int y=p->data;
            return y;
        }
    }
}


//***********************************************************************************
int main()
{
    struct node *root = NULL;
    
     bstinsert(&root,100);
     bstinsert(&root,50);
     bstinsert(&root,25);
     bstinsert(&root,60);
     bstinsert(&root,150);
     bstinsert(&root,225);
     bstinsert(&root,90);
     bstinsert(&root,80);
     bstinsert(&root,125);

     inordertraversal(root);
     struct node *p=bst_search(&root,50);


    printf((BST_Delete(&root,p)));
    
     
    
   
   

}