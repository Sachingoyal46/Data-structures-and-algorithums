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

void initialize(struct stack *s)
{
    s->top=-1;
    
}

int  is_empty(struct stack *s)
{
    if(s->top==-1)
    return true;
    else
    return false;

}

void push(struct stack *s,char x)
{
    if(s->top==stacksize-1)
    {
        printf("stack overflow");
        exit(1);
    }
    else
    s->top++;
    s->item[s->top]=x;
}

char pop(struct stack *s)
{   
    char x;
    if(is_empty(s))
    {
    printf("stack underflow");
    exit(1);
    }
    else
    {
    x=s->item[s->top];
    s->top--;
    return x;
    }
}

char stacktop(struct stack *s)
{
    char x;
    x=s->item[s->top];
    return x;
}

int main()
{
    struct stack s;
    char str[10];
    int i=0,j;
    char answer[10];
    initialize(&s);
    printf("enter the string\n");
    scanf("%s",&str);

    while(str[i]!='\0')
    {
        push(&s,str[i]);
        i++;
    }
    
    while(!is_empty(&s))
    {   int x;
        x=pop(&s);
        answer[j]=x;
        j++;

    }
    answer[j]='\0';

    printf("reverse string is %s",answer);

}

