#include<stdio.h>
#include<stdlib.h>

int n;
void arrayinsert(int *a,int i,int x)
{
    int j;
    for(j=n-1;j>=i;j--)
    {
        a[j+1]=a[j];
    }
    a[i]=x;

}

void arraydelete(int *a)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i-1]=a[i];
    }
}

void enqueue(int *a,int x)
{
    int i=0;
    while(i<n && x>=a[i])
    i++;
    arrayinsert(a,i,x);
    n++;
}

void display(int *a)
{
    int i;
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}

int dequeue(int *a)
{
    int x;
x=a[0];
arraydelete(a);
n=n-1;
return x;

}

int main()
{
    int a[100];
    n=0;
    enqueue(a,100);
     enqueue(a,20);
      enqueue(a,30);
       enqueue(a,120);
        enqueue(a,10);

        display(a);
        printf("\tdeleted element is %d\n",dequeue(a));
        printf("\tdeleted element is %d\n",dequeue(a));
        printf("\tdeleted element is %d\n",dequeue(a));
        printf("\tdeleted element is %d\n",dequeue(a));
        printf("\tdeleted element is %d\n",dequeue(a));
        return 0;

}