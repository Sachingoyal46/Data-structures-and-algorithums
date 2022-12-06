#include<stdio.h>
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
initialize()
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

push(int x)
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

pop()
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
stacktop()
{
    int x;
    x=s.item[s.top];
    return x;
}

/****************************************/

int main()
{
    int x;
    initialize();
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    push(600);

    x=pop();
    printf("poped elements are %d\n",x);

    x=pop();
    printf("poped elements are %d\n",x);

    x=pop();
    printf("poped elements are %d\n",x);

    x=stacktop();
    printf("%d\n",x);

    /****************************************************/


     int r;
    initialize(s);
    while(x!=0)
    {
        int rem=x%2;
        push(rem);
        x=x/2;
    }
    while(!isempty(s))
    {
        int a=pop(s);
        printf("%d",a);
    }



    return 0;


/***************************/


    initialize(s);
    while(x!=0)
    {
        int rem=x%8;
        push(rem);
        x=x/8;
    }
    while(!isempty(s))
    {
        int a=pop(s);
        printf("%d",a);
    }



    return 0;
}