#include<stdio.h>

int factorial(int x)
{
  if(x==0)
    return 1;
      else
    return x*factorial(x-1);
  
    
}



int main()
{
  int n,f;
  printf("enter the number\n");
  scanf("%d",&n);
  f=factorial(n);
  printf("%d",f);
  return 0;
  
  
}