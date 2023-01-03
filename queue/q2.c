#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct Queue
{
    char Item[10];
    int Front;
    int Rear;
}
/////////////////////////////////////////////////
initialize(struct Queue *Q)
{
  Q->Front=SIZE-1;
  Q->Rear=SIZE-1;
}
//////////////////////////////////////////////////
int isempty(struct Queue *Q)
{
  if(Q->Rear==Q->Front)
    return TRUE;
  else
    return FALSE;
    
}
/////////////////////////////////////////////////////
char Enqueue(struct Queue *Q, char  x)
{
  if((Q->Rear+1)%SIZE==Q->Front)
  {
    printf("Queue overflows");
    exit(1);
    }
  else
  {
  Q->Rear=(Q->Rear+1)%SIZE;
  Q->Item[Q->Rear]=x;}
}
//////////////////////////////////////////////////////
char Dequeue(struct Queue *Q)
{
  if(isempty(Q))
  {
  
    printf("\nQueue Underflows");
    exit(1);
    }
    
  
  Q->Front=(Q->Front+1)%SIZE;
  char x=Q->Item[Q->Front];
  return x;
}
///////////////////////////////////////////////////////
int main()
{ 
  int y;
  struct Queue myQ;
  char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
  initialize(&myQ);
  printf("Enter elements to insert:");
  scanf("%c %c %c %c %c %c %c %c %c %c ", &c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&c10,&c11);
  Enqueue(&myQ,c1);
  Enqueue(&myQ,c2);
  Enqueue(&myQ,c3);
  Enqueue(&myQ,c4);
  Enqueue(&myQ,c5);
  Enqueue(&myQ,c6);
  Enqueue(&myQ,c7);
  Enqueue(&myQ,c8);
  Enqueue(&myQ,c9);
  Enqueue(&myQ,c10);
 
  y=Dequeue(&myQ);
  printf("\nDeleted element is %c",y);
  y=Dequeue(&myQ);
  printf("\nDeleted element is %c",y);
   Enqueue(&myQ,c11);
}