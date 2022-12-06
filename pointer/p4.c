#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[20];
    double per;

};

int main()
{
    struct student s;
    struct student *ptr;
    ptr=&s;
     scanf("%d%s%lf",&((ptr)->rollno),(ptr)->name,&((ptr)->per));
     printf("%d%s%lf",((ptr)->rollno),(ptr)->name,((ptr)->per));

    
}
