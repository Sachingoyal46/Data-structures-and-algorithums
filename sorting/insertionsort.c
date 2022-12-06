//insertion sort
#include<stdio.h>

int insertion(int a[], int n)
{
  int i,j,k;
  for(i=1;i<n;i++)
    {
    k=a[i];
    j=i-1;
  while(a[j]>k && j>=0)
    {
      a[j+1]=a[j];
      j=j-1;
      
    }
  a[j+1]=k;
      }

  for(j=0;j<n;j++)
    printf("%d ",a[j]);
}

int main()
{
  int a[10]={2,4,1,3,8,6};
  insertion(a,6);
  return 0;
  
}