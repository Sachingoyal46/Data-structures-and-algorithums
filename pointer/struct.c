#include<stdio.h>
#include<malloc.h>

struct student
{
    int rollno;
    char name[20];
    double per;


};

input(struct student *ptr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%s%lf",&((ptr+i)->rollno),(ptr+i)->name,&((ptr+i)->per));
    }
}

output(struct student *ptr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d %s %lf\n",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->per);
}
}
int main()
{
    int n;
    struct student *p;
    printf("enter the no of data input of the students\n");
    scanf("%d",&n);
    p=(struct student *)malloc(n*sizeof( struct student));

    input(p,n);
    output(p,n);

    return 0;
   
}