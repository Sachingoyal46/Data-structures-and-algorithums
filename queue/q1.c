#include<stdio.h>
#include<stdlib.h>
#define queuesize 10
#define true 1
#define false 0
#define size 10
//*********************************

struct Queue
{
    char item[size];
    int front;
    int rear;
};
//****************************************

void initialize(struct Queue *Q)
{
    Q->front=0;
    Q->rear=-1;

}

//***********************************
int isempty(struct Queue *Q)
{
    if(Q->rear-Q->front+1==0)
    {
        return true;
    }
    else
    return false;
}

//************************************
//insertion

char enqueue(struct Queue *Q, char x)
{
    if (Q->rear==size-1)
    {
        printf("queue overflow\n");
    exit(1);
    }

    Q->rear=Q->rear+1;
    Q->item[Q->rear]=x;
}

//****************************************
//deletion
char dequeue( struct Queue *Q)
{
    char x;
    if(isempty(Q))
    {
    
        printf("queue underflow");
        exit(1);
    }

    
    x=Q->item[Q->front];
    Q->front=Q->front+1;
    return x;
}
//*************************
int main()
{
    char y;
    
    struct Queue myQ;
    initialize(&myQ);
    enqueue(&myQ,'A');
    enqueue(&myQ,'B');
    enqueue(&myQ,'C');
    enqueue(&myQ,'D');
    enqueue(&myQ,'E');
    enqueue(&myQ,'F');

    
    
    
    y= dequeue(&myQ);
    printf("deleted element is %c\n",y);
     y= dequeue(&myQ);
    printf("deleted element is %c\n",y);
     y= dequeue(&myQ);
    printf("deleted element is %c\n",y);
     y= dequeue(&myQ);
    printf("deleted element is %c\n",y);
    return 0;
}
