//interpolation search
#include<stdio.h>
#include<math.h>
int ip(int a[],int l,int h,int key)
{
  int est;

  if(l<=h && key>=a[l] && key<=a[h])
  {
    est=l+((h-l)/(a[h]-a[l]))*(key-a[l]);

    if(a[est]==key)
      return est;

    else if(a[est]>key)
      return ip(a,l,est-1,key);
    else if(a[est]<key)
      return ip(a,est +1,h,key);
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

  p=ip(a,0,n-1,key);

  printf("index of %d is %d ",key,p);
  return 0;
}

