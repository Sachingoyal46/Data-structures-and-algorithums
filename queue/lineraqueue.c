#include<stdio.h>
#include<stdlib.h>
#define size 10
//**************************************
struct queue
{
    int item[size];
    int rear;
    int front;
};
struct queue q;
//*****************************************
 void initialize()
{
    q.rear=0;
    q.front=1;
}
//******************************************
 int enqueue(int x)
{
    if(q.rear==size-1)
    {
        printf("queue overflows\n");
        exit(1);
    }

    q.rear++;
    q.item[q.rear]=x;
}
//***************************************
int dequeue()
{
    int x;
    if(q.rear-q.front+1==0)
    {
        printf("queue underflow");
        exit(1);
    }

    x=q.item[q.front];
    q.front++;
    return x;
}
//***************************************
int main()
{
    initialize();
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
     enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
     enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    printf("\ndeleted elements is %d",dequeue());
     printf("\ndeleted elements is %d",dequeue());
      printf("\ndeleted elements is %d",dequeue());
     printf("\ndeleted elements is %d",dequeue());
         printf("\ndeleted elements is %d",dequeue());
     return 0;

}



