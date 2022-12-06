#include<stdio.h>
int main()
{
    int a[10][10][10],x;
    printf("%u\n",&a[5][5][5]);
    printf("%u\n",&a[0][0][0]);
    x=1*((10)*(10)*(5)+(10)*(5)+(5));
    printf("%d",x + &a[0][0][0]);

}