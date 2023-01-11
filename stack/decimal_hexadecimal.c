#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stacksize 10
#define true 1
#define false 0

struct stack {
  int item[stacksize];
  int top;
};

void initialize(struct stack *s) {
  s->top = -1;

}

int is_empty(struct stack *s) {
  if ((s)->top == -1) {
    return true;
  } else
    return false;
}

void push(struct stack *s, int x) {

  if ((s)->top == stacksize - 1)
  {
    printf("stack overflowed\n");
    exit(1);
    }

  else
    (s)->top++;
  (s)->item[(s)->top] = x;
  
}

int pop(struct stack *s) {
  int x;
  if (is_empty(s)) {
    printf("stack is underflow\n");
    exit(1);

  } else
    x = (s)->item[(s)->top];
  (s)->top--;
  return x;
}

int stacktop(struct stack *s) {
  int x;
  x = s->item[s->top];
  return x;
}

int decimal_hexadecimal(int n)
{
    int x,r;
    struct stack s;
    char con[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    while(n>0)
    {
        r=n%16;
        push(&s,r);
        n=n/16;
    }
    while(!is_empty(&s))
    {
        x=pop(&s);
        printf("%c",con[x]);

    }
}

int main()
{   
    struct stack s;
    initialize(&s);
    int n;
    printf("enter the decimal number to convert into hexadecimal\n");
    scanf("%d",&n);
    decimal_hexadecimal(n);
}