#include<stdio.h>
#include<stdlib.h>
#define size 10
//**************************************
struct cqueue
{
    int item[size];
    int rear;
    int front;
};
struct cqueue cq;
//*****************************************
 void initialize()
{
    cq.rear=2;
    cq.front=2;
}
//******************************************
 int enqueue(int x)
{
    if((cq.rear+1)%size==(cq.front))
    {
        printf("queue overflow");
        exit(1);
    }
    cq.rear=(cq.rear+1)%size;
    cq.item[cq.rear]=x;
}
//***************************************
int dequeue()
{
    int x;
    if(cq.rear==cq.front)
    {
        printf("queue underflow");
        exit(1);
    }
    cq.front=(cq.front+1)%size;
    x=cq.item[cq.front];
    
    return x;
}
//***************************************
int main()
{
    initialize();
    enqueue(100);
    enqueue(200);
    enqueue(300);
     enqueue(300);
    
   
   
    printf("\ndeleted elements is %d",dequeue());
     printf("\ndeleted elements is %d",dequeue());
      printf("\ndeleted elements is %d",dequeue());
      
    printf("\ndeleted elements is %d",dequeue());
     printf("\ndeleted elements is %d",dequeue());
      printf("\ndeleted elements is %d",dequeue());
   
   
     return 0;

}



