#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
struct node {
  int data;
  struct node *left;
  struct node *right;
  struct node *next;
};
//**********************************************
struct node *rear,*front;

//********************************************************

makenode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->next=NULL;
    return p;
}
//**************************************************

initialize()
{
    rear=NULL;
    front =NULL;

}
//*******************************************************
isempty(struct node *rear,struct node *front)
{
    if((front)==NULL)
    {
        return true;
    }
    else
    return false;
}
//*************************************************************
struct node *getnode() {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  return p;
}


//****************************************************************
enqueue(struct node *p){
    if(rear!=NULL)
    {
        rear->next=p;
    }
    else
    front=p;
    rear=p;
}
//***********************************************************

struct node *dequeue(){
    struct node *p;
    p=front;
    front=front->next;
    if(front==NULL)
    rear=NULL;
    return p;
}
//********************************************************

 levelordertraversal(struct node *t)
{
  struct node *p;
    initialize();
    enqueue(t);
    while(!isempty(rear,front))
    {
        p=dequeue();
        printf("%d",p->data);
        if(p->left!=NULL)
        enqueue(p->left);

        if(p->right!=NULL)
        enqueue(p->right);
    }
}
//*****************************************************************
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

//*******************************************************


void main() {
  struct node *root;
  int x,y;
  printf("enter the data\n");
  scanf("%d",&x);
  root=makenode(x);
  createtree(&root);
  y=levelordertraversal(root);
  printf("%d",y);
  
  
 
}
