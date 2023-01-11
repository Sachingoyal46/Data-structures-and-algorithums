#include<stdio.h>
#include<stdlib.h>
#define queuesize 10
#define true 1
#define false 0
#define size 10
//*********************************

struct CQueue
{
    char item[size];
    int front;
    int rear;
};
//****************************************

void initialize(struct CQueue *CQ)
{
    CQ->front=0;
    CQ->rear=-1;

}

//***********************************
int isempty(struct CQueue *CQ)
{
    if(CQ->rear-CQ->front+1==0)
    {
        return true;
    }
    else
    return false;
}

//************************************
//insertion

char enqueue(struct CQueue *CQ, char x)
{
    if (CQ->rear==size-1)
    {
        printf("queue overflow\n");
    exit(1);
    }

    CQ->rear=CQ->rear+1;
    CQ->item[CQ->rear]=x;
}

//****************************************
//deletion
char dequeue( struct CQueue *CQ)
{
    char x;
    if(isempty(CQ))
    {
    
        printf("queue underflow");
        exit(1);
    }

    
    x=CQ->item[CQ->front];
    CQ->front=CQ->front+1;
    return x;
}
//*************************
int main()
{
    char y;
    
    struct Queue CQ;
    initialize(&CQ);
    enqueue(&CQ,'A');
    enqueue(&CQ,'B');
    enqueue(&CQ,'C');
    enqueue(&CQ,'D');
    enqueue(&CQ,'E');
    enqueue(&CQ,'F');

    
    
    
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
