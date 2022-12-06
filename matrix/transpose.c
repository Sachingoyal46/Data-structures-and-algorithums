#include<stdio.h>
int main()
{
   int  a[10][10], b[10][10],r1,c1,i,j,c[10][10],r2,c2;
   printf("enter the row of first matrix");
   scanf("%d",&r1);
   printf("enter the column of first matrix");
   scanf("%d",&c1);
     printf("enter the row of second matrix");
   scanf("%d",&r2);
   printf("enter the column of second matrix");
   scanf("%d",&c2);
if( r1==r2 && c1==c2)
{

            printf("enter the elements of  first matrix:");
   for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);


    }

      for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
            
    printf("\n");
    }
     printf("enter the elements of  second matrix:");
   for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);


    }

      for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",b[i][j]);
        }
            
    printf("\n");
    }

    
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            b[i][j]=a[j][i];
            
        }
        printf("\n");
    }
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",b[i][j]);
        }
            
    printf("\n");
    }
}
else{
    printf("invalid number");
}
   



}
