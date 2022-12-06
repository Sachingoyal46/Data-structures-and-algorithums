//power function
#include<stdio.h>

int pow(int b ,int p)
{
  if(b==1)
    return 1;
  else
    if(p==0)
      return 1;
    else
      return b*pow(b,p-1);
}

int main()
{
  int b,p,x;
  printf("enter the base \n");
  scanf("%d",&b);
  printf("enter the power \n");
  scanf("%d",&p);
  

  x=pow(b,p);
  printf("%d",x);
  return 0;
}

  