#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[20];
    double per;

};

//***********************************

input(struct student *ptr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%c%lf",&(ptr+i)->rollno,(ptr+i)->name,&(ptr+i)->per);
    }
}

output(struct student *ptr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d%c%lf",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->per);
    }
}





int main()
{
    int n;
    printf("enter the number of the data of the students\n");
    scanf("%d",&n);
    struct student *p;
    p=(struct student *)malloc(n*sizeof(struct student));

    input(p,n);
    output(p,n);
    return 0;
}

