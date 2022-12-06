//union of two array
#include<stdio.h>
 void intersection(int a[],int m,int b[],int n)
{
  int i=0,j=0,k=0;
  int c[10];

  while(i<m && j<n)
    {
      if(a[i]>b[j])
      {
       
        j++;
      }
      else
       if(a[i]<b[j])
       {
         
         i++;
       }
       else
       {
         c[k]=a[i];
         k++;
         i++;
         j++;
       }
    }
 
  for(i=0;i<k;i++)
    {
      printf("%d ",c[i]);
    }
}

int main()
{
  int a[5]={1,2,3,4,5};
  int b[5]={6,7,3,4,3};
  intersection(a,5,b,5);
  return 0;
}
