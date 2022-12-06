//linear search
#include<stdio.h>
int main()
{
  int a[20],n,i,s;
  printf("enter the size of array\n ");
  scanf("%d",&n);
  printf("enter the elements of arrys\n");
  
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("enter the search key\n");
  scanf("%d",&s);
  for(i=0;i<n;i++)
    {
      if(a[i]==s)
      {
        printf("elements are found\n");
      }
      else
        printf("elements are not found\n");
      break;
      
    }
}