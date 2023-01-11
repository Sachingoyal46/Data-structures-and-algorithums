#include<iostream>
#include<bits/stdc++.h>
#define size 3
#define true 1
#define false 0
using namespace std;

//*********************************************************************

struct Queue{
    int item[size];
    int front;
    int rear;
};
//********************************************************************
void initialize(struct Queue *q)
{
    q->rear=size;
    q->front=size;
}
//*******************************************************************
int empty(struct Queue *q)
{
    if(q->rear==q->front)
    {
        return true;
    }
    else
    return false;
}
//****************************************************************

int dequeue(struct Queue *q)
{
    if(empty(q))
    {
        cout<<"queue underflow"<<endl;
        exit(1);
    }
    else
    {
        q->front=(q->front +1)%size;
       int  x=q->item[q->front];
        return x;
    }
}
//*************************************************************************
void enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%size==q->front)
    {
        cout<<"queue is overflow"<<endl;
        exit(1);
    }
    else
    {
        q->rear=(q->rear+1)%size;
        q->item[q->rear]=x;

    }
}
//*************************************************************************
int main()
{
    struct Queue q;
    initialize(&q);

    enqueue(&q,100);
    enqueue(&q,200);
  

    int x=dequeue(&q);
    cout<<x<<endl;

    int y=dequeue(&q);
    cout<<y<<endl;
    
    enqueue(&q,400);
    enqueue(&q,100);
    enqueue(&q,200);

}


