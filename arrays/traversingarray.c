//program for traversing array elements
#include<stdio.h>
int main(){
  int a[10],i,n;
  printf("enter the size of array:\n");
  scanf("%d",&n);

  printf("enter the array elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("elements of array are =>>\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);

  return 0;
}