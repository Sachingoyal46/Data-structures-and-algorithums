//bubble sort
#include<stdio.h>
int bubblesort(int a[],int n)
{
  int i,j,t=0,min;
  for(i=0;i<=n-1;i++)
    {
      min=i;
      for(j=i+1;j<n;j++)
        {
          if(a[j]<a[min])
          {
            min=j;
            t=a[i];
          a[i]=a[min];
          a[min]=t;
            }
        }
    }
  for(j=0;j<n;j++)
    printf("%d ",a[j]);
  
}
int main()
{
  int a[8]={5,4,7,2,9,1,6,3};
  bubblesort(a,8);
  return 0;
  
  
}