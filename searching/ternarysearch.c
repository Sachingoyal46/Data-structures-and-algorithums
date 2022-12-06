//ternary search
#include<stdio.h>
int ts(int a[],int l,int r,int key)
{
  
  if(r>=1)
  {
    int m1,m2;
  m1=l+(r-l)/3;
  m2=r-(r-l)/3;

    if(key==a[m1])
    {
      return m1;
    }
    if(key==a[m2])
    {
      return m2;
    }
    if(key<a[m1])
    {
      return ts(a,l,m1-1,key);
    }
    else if(key>a[m2])
    {
      return ts(a,m2+1,r,key);
      
    }
    else{
      return ts(a,m1+1,m2-1,key);

    }
  }
  else
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

  p=ts(a,0,n-1,key);

  printf("index of %d is %d ",key,p);
  return 0;
}

