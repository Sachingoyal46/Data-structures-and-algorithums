//merge sort
#include<stdio.h>
int merge(int a[],int m,int b[],int n)
{
  int c[m+n];
  int i=1,j=1,k=1;
  while(i<=m && j<=n)
    {
      if(a[i]<b[j])
      {
        c[k]=a[i];
        i++;
        k++;
      }
      else
        c[k]=b[j];
          j++;
      k++;
      
    }
  while(i<=m)
    {
      c[k]=a[i];
      i++;
      k++;
    }
   while(j<=n)
    {
      c[k]=a[j];
      j++;
      k++;
    }
  for(i=1;i<k;i++)
  printf("%d ",c[k]);
}

int main()
{
  int a[5]={2,4,3,5,8};
  int b[5]={9,7,8,2,1};
  int m=5,n=5;
  merge(a,5,b,5);
  return 0;
}