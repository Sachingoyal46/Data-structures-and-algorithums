//gcd
#include<stdio.h>
int gcd(int a,int b)
{
  if(a==0)
    return b;
  else if(b==0)
    return a;
  else
    if(a>b)
      return gcd(a%b,b);
    else
      return gcd(a,b%a);
}

int main()
{
  int a,b,x;
  printf("enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf("%d",&b);

  x=gcd(a,b);
  printf("%d",x);
  
  
}
