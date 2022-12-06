//union of two array
#include<stdio.h>
 void UNION(int a[],int m,int b[],int n)
{
  int i=0,j=0,k=0;
  int c[10];

  while(i<m && j<n)
    {
      if(a[i]>b[j])
      {
        c[k]=b[j];
        k++;
        j++;
      }
      else
       if(a[i]<b[j])
       {
         c[k]=a[i];
         k++;
         i++;
       }
      else
       {
         c[k]=a[j];
         k++;
         i++;
         j++;
       }
    }
  while(i<m)
    {
      c[k]=a[i];
      i++;
      k++;
    }
  while(j<n)
    {
      c[k]=b[j];
      j++;
      k++;
    }
  for(i=0;i<m+n;i++)
    {
      printf("%d ",c[i]);
    }
}

int main()
{
  int a[5]={1,2,3,4,5};
  int b[5]={6,7,3,4,3};
  UNION(a,5,b,5);
  return 0;
}


