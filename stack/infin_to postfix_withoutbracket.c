#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define STACKSIZE 10
struct stack{
int item[STACKSIZE];
int top;
};


void initialize(struct stack *s)
{
  s->top=-1;
}
int empty(struct stack s)
{
  if(s.top==-1)
    return 1;
  else
    return 0;
}
void push(struct stack *s,int x)
{
  if(s->top==STACKSIZE-1)
  {
    printf("Stack overflows");
    exit(1);
  }
  s->top=s->top+1;
  s->item[s->top]=x;
  
}
int pop(struct stack *s)
{
  int x;
  if(s->top==-1)
  {
    printf("Stack underflows");
    exit(1);
  }
  x=s->item[s->top];
  s->top=s->top-1;
  return x;
}
int stacktop(struct stack s)
{
  int x;
  x=s.item[s.top];
  return x;
    
}
int prcd(char op1,char op2)
{
  if(op1=='$'||op1=='*'||op1=='/'||op1=='%')
  {
    if(op2=='$')
      return FALSE;
    else
      return TRUE;
  }
  else
  {
    if(op1=='+'||op1=='-')
    {
      if(op2=='+'||op2=='-')
        return TRUE;
      else
        return FALSE;
        }
  }
}
void infixtopostfix(char *infix)
{
  struct stack s;
  initialize(&s);
  int i=0;
  char postfix[20],symbol,x;
  int j=0;
  while(infix[i]!='\0')
    {
      symbol=infix[i++];
      if(symbol>='a'&&symbol<='z'||symbol>='A'&&symbol<='Z'||symbol>='0'&&symbol<='9')
      {
        postfix[j]=symbol;
        j++;
        
      }
      else
      {
        while(!empty(s)&&prcd(stacktop(s),symbol))
          {
          x=pop(&s);
        postfix[j]=x;
        j++;
      }
      push(&s,symbol);
    }
      }
  while(!empty(s))
    {
      x=pop(&s);
      postfix[j]=x;
      j++;
    }
postfix[j]='\0';
printf("Postfix expression is %s",postfix);
  

  
}  
int main()
{
  char exp[]="a+b";
infixtopostfix(exp);
}
