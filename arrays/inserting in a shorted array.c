//inserting the element in shorted array
#include<stdio.h>
int main()

{
 int  a[5]={22,45,67,23,78};
  int pos=0,e,i,n=5;
  printf("required array are:\n");
  for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\n");
  printf("enter the inserted element:");
  scanf("%d ",&e);
  
  for(i=0;i<n;i++)
    {
      if(a[i]<e)
      {
        pos=pos+1;
      }
      else
      {
        break;
      }
    }
  for(i=n-1;i>=pos;i--)
    {
      a[i+1]=a[i];
    }
  a[pos]=e;

  for(i=0;i<=n;i++)
    {
      printf("%d ",a[i]);
    }
  return 0;
  
}