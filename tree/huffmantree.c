#include<stdio.h>
#include<stdlib.h>
struct node
{
    // int info;
     int info;
    struct node *next;
    struct node *left;
    struct node *right;
    
    char c;

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
    p->next=NULL;
    q=(*start);
    while(q->next!=NULL)
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
    q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}

void traverse(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d-->",p->info);
        p=p->next;
    }

}

void ascendingorderinsertion(struct node **start,int key)
{
    struct node *p,*q;
    if((*start)==NULL)
    {
        insbeg(&(*start),key);
    }
    else
    {
        p=(*start);
        q=NULL;
        while(p!=NULL && key>=p->info)
        {
            q=p;
            p=p->next;
        }
        if(q==NULL)
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
struct node *huffmantree(char c[],int f[],int n)
{
    struct node *pq=NULL,*x,*z,*y;
    
    for(int i=0;i<=n-1;i++)
    {
        x=getnode();
        x->info=f[i];
        x->c=c[i];

        ascendingorderinsertion(pq,x);
    }
    for(int i=1;i<=n-1;i++)
    {
        x=dequeue(&pq);
        y=dequeue(&pq);
        z=getnode();
        z->left=x;
        z->right=y;
        z->info=x->info+y->info;
        ascendingorderinsertion(pq,z);

    }
    return dequeue(&pq);
    

}

    

int main()
{
    struct node *start,*p;
    start=NULL;
    ascendingorderinsertion(&start,10);
    char c[6]={'a','m','i','c','x'};
    int f[6]={35,20,25,15,5},n=5;
    huffmantree(c,f,n);





}