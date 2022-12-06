//jump search
#include<stdio.h>
#include<math.h>
int js(int a[],int n,int key)
{
  int i,start=0,end=sqrt(n);

  while(a[end]<key && start<n)
    {
      start=end;
      end=end+sqrt(n);

      if(end>n-1)
        end=n;
    }
  for(i=start;i<end;i++)
    {
      if(a[i]==key)
        return i;
    }
  return -1;
  
 
  
  }

int main()
{
  int a[100],i,n,key,p;
  printf("enter the size of array\n");
  scanf("%d",&n);

  printf("enter the elements of the array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("enter the search key of the given array\n");
  scanf("%d",&key);

  p=js(a,n,key);

  printf("index of %d is %d ",key,p);
  return 0;
}

