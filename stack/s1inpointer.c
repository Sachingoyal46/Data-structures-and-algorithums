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


/*****************************************/
void initialize(struct stack *s)
{
    s->top=-1;
}

/*********************************************/

int isempty(struct stack *s)
{
    if(s->top==-1)
    return true;
    else
    return false;
}

/*********************************************/

push(struct stack *s,int x)

{
    //int x;
    if(s->top==stacksize-1)
    {
        printf("stack is overflowed");
        exit(1);
    }

    s->top++;
    s->item[s->top]=x;
}

/*******************************************/

int pop(struct stack*s)
{
    int x;
    if(isempty(s))
    {
        printf("stack underflowed");
        exit(1);
    }
    x=s->item[s->top];
    s->top--;
    return x;
}
/********************************************/
int stacktop( struct stack *s)
{
    int x;
    x=s->item[s->top];
    return x;
}

/****************************************/

int main()
{
    struct stack fs;
    int x;
    initialize(&fs);
    push(&fs,100);
    push(&fs,200);
    push(&fs,300);
    push(&fs,400);
    push(&fs,500);
    push(&fs,600);

    x=pop(&fs);
    printf("poped elements are %d\n",x);

    x=pop(&fs);
    printf("poped elements are %d\n",x);

    x=pop(&fs);
    printf("poped elements are %d\n",x);

    x=stacktop(&fs);
    printf("%d\n",x);
}

    /****************************************************/


//      int r;
//     initialize(s);
//     while(x!=0)
//     {
//         int rem=x%2;
//         push(rem);
//         x=x/2;
//     }
//     while(!isempty(s))
//     {
//         int a=pop(s);
//         printf("%d",a);
//     }



//     return 0;


// /***************************/


//     initialize(s);
//     while(x!=0)
//     {
//         int rem=x%8;
//         push(rem);
//         x=x/8;
//     }
//     while(!isempty(s))
//     {
//         int a=pop(s);
//         printf("%d",a);
//     }



//     return 0;
// }