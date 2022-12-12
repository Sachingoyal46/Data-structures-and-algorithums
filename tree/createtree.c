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
//*************************************************
int count(struct node *t)
{
    if(t==NULL)
    {
        return 0;

    }
    else
    {
        return 1 + count(t->left) + count(t->right);
    }
}
//**************************************************
int countleaf(struct node *t)
{
     if(t==NULL)
    {
        return 0;
    }
    else{
        if(t->left==NULL && t->right==NULL)
        {
            return 1;
        }
        else{
            return countleaf(t->left) + countleaf(t->right);
        }
    }
    
}
//******************************************************

int countN2(struct node *t)
{   
     if(t==NULL)
    {
        return 0;
    }
    else{
        if(t->left==NULL && t->right==NULL)
        {
            return 0;
        }
        else{
            if(t->left!=NULL && t->right!=NULL)
            {
                return 1 + countN2(t->left) + countN2(t->right);
            }
            else

            return countN2(t->left) + countN2(t->right);
        }
    }

}
//*************************************************************
int countN1(struct node *t)
{   
     if(t==NULL)
    {
        return 0;
    }
    else{
        if(t->left==NULL && t->right==NULL)
        {
            return 0;
        }
        else{
            if(t->left!=NULL && t->right!=NULL)
            {
                return  countN1(t->left) + countN1(t->right);
            }
            else

            return 1 +countN1(t->left) + countN1(t->right);
        }
    }

}
//***********************************************************


int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

//******************************************************
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
            return 0;
        }
        else
        {
            return (max(height(t->left),height(t->right)))+1;
        }
    }
}
//**************************************************
int iscomplete(struct node *t)
{
    if(2*(height(t))==countleaf(t))
    {
        return 1;

    }
    else
    return 0;
}
//***********************************************
int isstrictly(struct node *t)
{
    if(countN1==0)
    {
        return 1;
    }
    else
    return 0;
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
    // preordertraversal(root);
    //  printf("\n");
    // inordertraversal(root);
    //  printf("\n");
    // postordertraversal(root);
    //  printf("\n");
   
    printf("%d",height(root));
    printf("\n");

    printf("%d",countN1(root));
    printf("\n");

    printf("%d",countN2(root));
    printf("\n");

    printf("%d",countleaf(root));

    printf("\n");
    printf("%d",iscomplete(root));

    printf("\n");
    printf("%d",isstrictly(root));

    
    // root=makenode('A');
    // root->left=makenode('B');
    // root->right=makenode('C');2
    
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
