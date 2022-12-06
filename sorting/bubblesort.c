//bubble sort
#include<stdio.h>
int bubblesort(int a[],int n)
{
  int i,j,t;
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;
            }
        }
    }
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
int main()
{
  int a[8]={23,45,22,12,10,46,13,24};
  bubblesort(a,8);
  
  
}