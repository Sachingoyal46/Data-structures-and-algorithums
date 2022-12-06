 //reverse array------
  
  int a[10],i,n;
  {
  printf("enter the size of array\n");
  scanf("%d",&n);

  printf("enter the elements of array:");

  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("array are:\n");
   for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
      
    }
  printf("\n");
  printf("reverse arry are:\n");
  
  for(i=n-1;i>=0;i--)
    {
      printf("%d",a[i]);
    }
  return 0;
  }
  
