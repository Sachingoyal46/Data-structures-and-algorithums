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

int main()
{
    char exp[]="()";
    int i=0;
    char x;
    int flag=1;
    initialize();
    while(exp[i]!='\0')
    {
        x=exp[i];
        if(x=='(')
        push(x);
        else

        {
            if(isempty())
            {
                flag=0;
                break;
            }
            else

            pop();
        }
        i++;

    }

    if(isempty())
    {
        if(flag==0)
        printf("expression is not correct\n");
        else

        printf("expression is correct\n");
    }
    return 0;


}