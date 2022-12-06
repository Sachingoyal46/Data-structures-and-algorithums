//SET DIFFERENCE of two array
#include<stdio.h>
int main()
{
  int a[10],b[10],c[20],m,n,i,j,k;
  printf("enter the size of first array\n");
  scanf("%d",&m);

  printf("enter the elements of first array:");
  for(i=0;i<m;i++)
  scanf("%d",&a[i]);

  printf("arrays first elements are:\n");
    for(i=0;i<m;i++)
    {
      printf("%d ",a[i]);
    }
  
  printf("\n");
   printf("enter the size of second array\n");
  scanf("%d",&n);

  printf("enter the elements of second array:\n");
  for(j=0;j<n;j++)
  scanf("%d",&b[j]);

  printf("arrays second elements are:\n");
    for(i=0;i<n;i++)
    {
      printf("%d ",b[i]);
    }
  printf("\n");
  
  i=0;
  j=0;
  k=0;
  while(i<m && j<n)
    {
      if(a[i]<b[j])
      {
       
       c[k]=a[i]; 
        i++;
        k++;
      }
      else
      {
       
          i++;
          j++;
        
        }
      }
      
    
 while(i<m)
    {
      c[k]=a[i];
      k++;
      i++;
    }
 /* while(j<n)
    {
      c[k]=b[j];
      k++;
      j++;
    }*/

      printf("SET DIFFERENCE(A-B) of array is\n");
  for(i=0;i<k;i++)
    {
      printf("%d ",c[i]);
    }
  return 0;

 
   
}