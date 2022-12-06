#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define stacksize 10
#define true 1
#define false 0
struct stack

{
    char item[stacksize];
    int top;
};

struct stack s;
/*****************************************/
int initialize()
{
    s.top=-1;
}

/*********************************************/

int isempty()
{
    if(s.top==-1)
    return true;
    else
    return false;
}

/*********************************************/

char push( char x)
{
    if(s.top==stacksize-1)
    {
        printf("stack is overflowed");
        exit(1);
    }

    s.top++;
    s.item[s.top]=x;
}

/*******************************************/

char pop()
{
    int x;
    if(isempty())
    {
        printf("stack underflowed");
        exit(1);
    }
    x=s.item[s.top];
    s.top--;
    return x;
}
/********************************************/
char stacktop()
{
    char x;
    x=s.item[s.top];
    return x;
}
//**********************************************
int main()
{
  struct stack s;
  int i=0,j=0;
  int c;
  char answer[10];
  int x;
  char str[10];
  initialize();
  scanf("%s",str);
  while(str[i]!='\0')
  {
    push(str[i]);
    i++;
  }

  while(!isempty())
    {
      x=pop();
      answer[j]=x;
      j++;
      }
  answer[j]='\0';

  c=strcmp(str,answer);
  if(c==0)
  {
    printf("given string are palindrome");
  }
  else
    printf("given string is not palindrome");



  return 0;

}

//***************************************************
//another way
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define stacksize 10
#define true 1
#define false 0
struct stack

{
    char item[stacksize];
    int top;
};

struct stack s;
/*****************************************/
int initialize()
{
    s.top=-1;
}

/*********************************************/

int isempty()
{
    if(s.top==-1)
    return true;
    else
    return false;
}

/*********************************************/

char push( char x)
{
    if(s.top==stacksize-1)
    {
        printf("stack is overflowed");
        exit(1);
    }

    s.top++;
    s.item[s.top]=x;
}

/*******************************************/

char pop()
{
    int x;
    if(isempty())
    {
        printf("stack underflowed");
        exit(1);
    }
    x=s.item[s.top];
    s.top--;
    return x;
}
/********************************************/
char stacktop()
{
    char x;
    x=s.item[s.top];
    return x;
}
//**********************************************
int main()
{
  struct stack s;
  int i=0,j=0;
  int c;
  char answer[10];
  int x;
  char str[10];
  initialize();
  scanf("%s",str);
  while(str[i]!='\0')
  {
    push(str[i]);
    i++;
  }


  i=0;
  while(!isempty())
    {
     if(stacktop()==str[i])
       pop();
      else
       break;
      i++;
      }
  if(isempty())
    printf("given string is a palindrome");
  else
    printf("given striomg is not a plindrome");

  return 0;

}