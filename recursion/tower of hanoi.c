#include<stdio.h>
int tower(int n,char s,char m,char d)
{
  if(n==1)
    printf("%c----->%c\n",s,d);
  else
  {
    tower(n-1,s,d,m);
    printf(" disk %d %c----->%c\n",n,s,d);
  tower(n-1,m,s,d);
    }
  
  
      
  
}

int main()
{
  int n,x;
  printf("enter the no of disk\n");
  scanf("%d",&n);
  x=tower(n,'s','m','d');
  printf("%d",x);
  return 0;
  
}