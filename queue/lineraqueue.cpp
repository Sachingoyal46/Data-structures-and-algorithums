#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 20
#define true 1
#define false 0
//***********************************************************
struct Queue {
    int item[size];
    int front;
    int rear;
};
//*******************************************************
void initialize(struct Queue *q)
{
    q->rear=0;
    q->front=1;
}
//**********************************************************
 
 int empty(struct Queue *q)
{
    if(q->rear -q->front +1==0)

    return true;

    else
    return false;


}
//************************************************************
int dequeue(struct Queue *q)
{
    int x;
    if(empty(q))
    {
        cout<<"queue is underflow"<<endl;
        exit(1);
    }
    else
    {   
        x=q->item[q->front];
        q->front=q->front+1;
        return x;
    }

}
//************************************************************8
  void enqueue(struct Queue *q,int x)
{
    if(q->front==size)
    {
        cout<<"queue is overflow"<<endl;
    }
    else
    q->rear=q->rear+1;
    q->item[q->rear]=x;
}
//*****************************************************************
int main()
{
    struct Queue q;
    initialize(&q);

    enqueue(&q,100);
    enqueue(&q,200);
    enqueue(&q,300);
    // enqueue(&q,400);
  int x=dequeue(&q);
  cout<<x<<endl;
  int y=dequeue(&q);
  cout<<y<<endl;
  int z=dequeue(&q);
  cout<<z<<endl;
   int f=dequeue(&q);
  cout<<f<<endl;





}