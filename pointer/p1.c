#include<stdio.h>
#include<stdlib.h>


// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int *ptr,i;
//     ptr=&a[0];

//     for(i=0;i<=9;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//     for(i=0;i<=9;i++)
//     {
//         printf("%d ",*(ptr+i));//   pointer  * means value at and & means address of .
//     }
//     printf("\n");

//     for(i=0;i<=9;i++)
//     {
//         printf("%d ",*(a+i));
//     }
// }

// int traverse(int *ptr,int n)
// {
//     int i;
//     for(i=0;i<=9;i++)
//     {
//         printf("%d ",*(ptr+i));
//     }
// }

// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     traverse(a,10);
//     return 0;

// }
// }


// {
   
//     int *p,i;
//     p=(int*)malloc(40);
//     printf("enter the no\n");

//     for(i=0;i<=9;i++)
//     {
//         scanf("%d",(p+i));

//     }

//     for(i=0;i<=9;i++)
//     {
//         printf("%d",*(p+i));
//     }


// }

//******user input char using pointer**************************************
   
// char *p;
// int i;
//     p=(char*)malloc(10);
//     printf("enter the no\n");

//     for(i=0;i<=9;i++)
//     {
//         scanf("%c",(p+i));

//     }

//     for(i=0;i<=9;i++)
//     {
//         printf("%c",*(p+i));
//     }

    // printf("%d",sizeof(int));



// user define ********************************************//

// {
   
//     int *p,i,n;
//     printf("enter the no ");
//     scanf("%d",&n);
//     p=(int*)malloc(n*sizeof(int));
//     printf("enter the no\n");

//     for(i=0;i<=9;i++)
//     {
//         scanf("%d",(p+i));

//     }

//     for(i=0;i<=9;i++)
//     {
//         printf("%d",*(p+i));
//     }


// }
//   
int  input(int *p,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }

}

 output(int *p,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}

int main()
{

    int *p;
    int n;
    printf("enter the size");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    input(p,n);
    output(p,n);
}


// question 