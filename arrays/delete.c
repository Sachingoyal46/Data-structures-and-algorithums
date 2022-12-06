//enter the element to be deleted
#include<stdio.h>
int main()
{
  int a[10],i,n,p,e;
  printf("enter the size of array:\n");
  scanf("%d",&n);

  printf("enter the array elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("array is:\n");
   for(i=0;i<n;i++)
     printf("%d ",a[i]);
  printf("\n");

  printf("enter the deleting element:\n");
    scanf("%d",&e);

  printf("enter the position of deleting elements:\n");
  scanf("%d",&p);

  if(p<n && p>=0)
    {
      for(i=p;i<=n;i++)
        {
          a[i]=a[i+1];
        }
      
    }
  else
  {
    printf("inalid number:\n");
  }
   for(i=0;i<n-1;i++)
    {
      printf("%d ",a[i]);
    }


  return 0;
}