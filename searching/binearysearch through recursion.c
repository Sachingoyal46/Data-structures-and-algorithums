//bineary search
#include<stdio.h>

int bineary(int a[],int low,int high,int key)
{
  
  if(low<=high)
  {
  int  mid=(low+high)/2;
  {
    if(a[mid]==key)
      return mid;
    else
      if(a[mid]<key)
      return  bineary(a,mid+1,high,key);
      else
       return  bineary(a,low,mid-1,key);
    }
    }
  return -1;
  
}

int main()
{
  int a[]={1,2,3,4,5,6,7,8},k,x;
  int n=8;
  printf("enter the number to be search\n");
  scanf("%d",&k);
 

  x=bineary(a,0,n-1,k);
    if(x==-1)
  {
    printf("number is not found\n");
    
  }
  else
    printf("nunber is found\n");
  return 0;
  
}