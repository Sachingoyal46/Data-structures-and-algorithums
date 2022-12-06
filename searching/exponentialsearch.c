//exponencial search
#include<stdio.h>
#include<math.h>


int exponential(int a[],int n,int x)
{
  if(a[0]==x)
  {
    return 0;
  }

  int i=1;
  while(i<n && a[i]<=x)
    {
    i=i*2;
  return bs(a,i/2,n-1,x);
      }
  
}
int bs(int a[],int l,int r,int x)
{
  if(r>=1)
  {
    int mid=(r+l)/2;
    if(a[mid]==x)
    {
      return mid;
    }

    if(a[mid]>x)
      return bs(a,l,mid-1,x);
    else
      return bs(a,mid+1,r,x);
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

  p=exponential(a,n,key);

  if(p==-1)
  {
    printf("element is not found\n");
  }
    else
    printf("element is present\n");
    
    

  return 0;
}



