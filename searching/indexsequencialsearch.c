//indexsequencial search
#include<stdio.h>
#include<math.h>



int index(int a[],int n,int key)
{
  int index[20],i;
  int j=0,x=0,start,end,bs;

  printf("enter the block size:\n");
  scanf("%d",&bs);

  for(i=0;i<n;i=i+bs)
    {
      index[x++]=i;
    }
  if(key<a[index[0]] || key>a[index[x-1]])
  {
    printf("key is not found:\n");
    exit(0);
    
  }
  else
  {
    for(i=1;i<=x;i++)
      {
        if(key<=a[index[i]])
        {
          start=index[i-1];
          end=start +bs;
          break;
        }
      }
    sequence(a,start,end,key);
  }
}






int sequence(int a[],int start,int end,int key)
{
  int i,flag=0;

  for(i=start;i<=end;i++)
  {
    if(key==a[i])
    {
      flag=1;
      break;
      }
  }
  if(flag==1)
  
    printf("element is found at index %d\n",i);
    
    
  
  else
    printf("element is not found\n");
    
}




int main()
{
  int a[100],i,n,key;
  printf("enter the size of array\n");
  scanf("%d",&n);

  printf("enter the elements of the array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("enter the search key of the given array\n");
  scanf("%d",&key);

  index(a,n,key);
  sequence(a,0,n-1,key);

  // printf("index of %d is %d ",key,p);|
  return 0;
}
