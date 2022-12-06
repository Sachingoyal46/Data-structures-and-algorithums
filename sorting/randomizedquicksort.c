#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int partition(int a[],int low,int high)
{
    int x;
    srand('time(0)');
    int random=rand()%(high+1)+low;
    
    x=a[low];
    a[low]=a[random];
    a[random]=x;

  int i=low;
  int j=high+1;
  int pivot=a[low];
  int t,k;
  do
    {
      do{
        i++;
      }while(a[i]<pivot);
    

    do
    {
      j--;
    }while(a[j]>pivot);
      
    if(i<j)
  {
    t=a[i];
    a[i]=a[j];
  a[j]=t;
  }
      }while(i<j);
  k=a[j];
    a[j]=a[low];
  a[low]=k;

  return j;
  
}

void quicksort(int a[],int low,int high)
{
  if(low<high)
  {
    int j;
    j=partition(a,low,high);
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
  }
}

int main()
{
 int n,i;
 printf("enter the size of elements \n");
 scanf("%d",&n);
 int a[n+1];

 printf("enter the number of elements\n");
 for(i=0;i<n+1;i++)
 {
 scanf("%d",&a[i]);
 }

 a[n]=INT_MAX;
    quicksort(a,0,n-1);
    printf("sorted array are\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
  
}