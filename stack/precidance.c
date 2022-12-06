#include<stdio.h>
#define TRUE 1
#define FALSE 0

char prec(char a,char b)
{
  if(a=='^' ||a=='*'|| a=='/'||a=='%')
  {
    if (b=='^')
      return FALSE;
    else
      return TRUE;
  }
  else
  {
    if (b=='+' || b=='-')
      return TRUE;
    else
      return FALSE;
  }

  }
int main()
{
  int x;
  char a,b;
  printf("enter the operator\n");
  scanf("%c %c",&a,&b);
  x=prec(a,b);
  printf("%d",x);
  
}