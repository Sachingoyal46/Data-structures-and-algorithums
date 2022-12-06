#include<stdio.h>
int main()
{
    int a[10][10],x;
    printf("%u\n",&a[5][5]);
    printf("%u\n",a);
    x= 1*(5)*(10)+5;
    printf("%u\n",x);
    printf("%u\n",a +x);
}