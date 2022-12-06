#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
#define true 1
#define false 0
struct stack

{
    int item[stacksize];
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

int push(int x)
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

int pop()
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
int stacktop()
{
    int x;
    x=s.item[s.top];
    return x;
}

/****************************************/
//postfix 
int evaluate(int a,int b,char op)
{
    switch(op)
    {
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '&': return a&b;
        default: return a/b;
        
    }
}

int main()
{
    int x,i=0,val,b,a;
    char ps[20];
    char symb;
    initialize();
    scanf("%s",ps);

    while(ps[i]!='\0')
    {
        symb=ps[i];
        if(symb>='0' && symb<='9')
        {
            push(symb-48);

        }
        else{
            b=pop();
            a=pop();
            val=evaluate(a,b,symb);

            push(val);

        }
        i++;
    }
    x=pop();
    printf("%d",x);
    return 0;
}



    