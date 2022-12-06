#include<stdio.h>
int main()
{
    int a[10];

    printf("%u\n",&a[5]);
    printf("%u\n",&a[0]);
    
    printf("%u",(&a[0]+1*(5)));
}