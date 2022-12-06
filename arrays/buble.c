#include<stdio.h>
void BUBBLE(int a[],int n)

{
  int i,j,t;
  for(i=1;i<n-1;i++)
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
  for(j=0;j<n;j++)
    {
      printf("%d ",a[j]);
    }
  
}
int  main()
{
  int a[5]={3,5,6,4,7};
  BUBBLE(a,5);
  return 0;
}