#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;

};

struct node *getnode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}

void insbeg(struct node **start,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=(*start);
    (*start)=p;


}

void insaft(struct  node **p,int x)
{
    struct node *q;
    q=getnode();
    q->info=x;
    q->next=(*p)->next;
    (*p)->next=q;


}

void insend(struct node **start,int x)
{
    struct node *p,*q;
    p=getnode();
    p->info=x;
    p->next=null;
    q=(*start);
    while(q->next!=null)
    {
        q=q->next;
    }
    q->next=p;
}

int delbeg(struct node **start)
{
    struct node *p;
    int x;
    p=(*start);
    (*start)=(*start)->next;
    x=p->info;
    free(p);
    return x;

}

int delaft(struct node **p)
{
    int x;
    struct node *q;
    q=(*p)->next;
    (*p)->next=q->next;
    x=q->info;
    free(q);
    return x;
}

delend(struct node **start)
{
    struct node *p,*q;
    int x;
    p=(*start);
    q=null;
    while(p->next!=null)
    {
        q=p;
        p=p->next;
    }
    q->next=null;
    x=p->info;
    free(p);
    return x;
}

void traverse(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=null)
    {
        printf("%d-->",p->info);
        p=p->next;
    }

}

void ascendingorderinsertion(struct node **start,int key)
{
    struct node *p,*q;
    if((*start)==null)
    {
        insbeg(&(*start),key);
    }
    else
    {
        p=(*start);
        q=null;
        while(p!=null && key>=p->info)
        {
            q=p;
            p=p->next;
        }
        if(q==null)
        insbeg(&(*start),key);
        else
        insaft(&q,key);

    }
}
dequeue(struct node **start)
{
    int x;
    x=delbeg(&(*start));
    return x;
}
int main()
{
    struct node *start,*p;
    start=null;
    enqueue

}