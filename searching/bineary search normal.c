//bineary search
#include<stdio.h>
int main()
{
  int a[100],n,key,i,low,high,mid;
  printf("enter the size of array\n");
  scanf("%d",&n);

  printf("enter the elements of the arrsays\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("enter the search key of the array\n");
  scanf("%d",&key);
  low=0;
  high=n-1;
  mid=(low+high)/2;
  while(low<=high)
    {
      if(a[mid]==key)
      {
        printf("number is found\n");
        break;
        }
      else
        if(a[mid]>key)
        {
          high=mid-1;
        }
      else
          low=mid+1;
    }
  if(low>high) 
    printf("number is not found\n");
  return 0;

  }