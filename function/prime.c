#include <stdio.h>
#include<math.h>

int prime(int n)
{
  int i,flag=0;
  for(i=2;i<=pow(n,0.5);i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
  if(flag==0)
  {
    printf("number is prime");
  }
  else
    printf("not prime");
    
}
int main()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  prime(n);
  return 0;
}