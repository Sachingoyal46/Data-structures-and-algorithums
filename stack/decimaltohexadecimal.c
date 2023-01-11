#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stacksize 10
#define TRUE 1
#define FALSE 0
struct stack

{
  int item[stacksize];
  int top;
};

struct stack s;
/***************/
int initialize() { s.top = -1; }

/***************/

int isempty() {
  if (s.top == -1)
    return TRUE;
  else
    return FALSE;
}

/***************/


/**************/

int push(int x) {
  if (s.top == stacksize - 1) {
    printf("stack is overflowed");
    exit(1);
  }

  s.top++;
  s.item[s.top] = x;
}

/***************/

int pop() {
  int x;
  if (isempty()) {
    printf("stack underflowed");
    exit(1);
  }
  x = s.item[s.top];
  s.top--;
  return x;

}
/****************/
char stacktop() {
  char x;
  x = s.item[s.top];
  return x;
}
//***************************************
void decimaltohexa(int n)
{
    int r,x;
    char con[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    initialize();
    
    while(n>0)
    {
        r=n%16;
        push(r);
        n=n/16;
    }
    while(!isempty())
    {
        x=pop();
        printf("%c",con[x]);
    }

}
//************************************

int main()
{
    
    int n;
     printf("enter the decimal number\n");
    scanf("%d",&n);
    decimaltohexa(n);
    return 0;
   

}
