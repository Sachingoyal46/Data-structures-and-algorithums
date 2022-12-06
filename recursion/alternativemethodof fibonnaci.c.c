#include <stdio.h>
int fibonnaci(int n) 
{
   static int m[100];
  if (n == 1)
    m[1] = 0;
  else {
    if (n == 2)
      m[2] = 1;
    else {
      if (m[n] == 0)
        m[n] = fibonnaci(n - 1) + fibonnaci(n - 2);
    }
    }
    return m[n];
  
}

int main() {
  int n, x, i;
  printf("enter the number\n");
  scanf("%d", &n);

  for (i = 1; i <=n; i++) {

    x = fibonnaci(i);
    printf("%d ", x);
    }
  return 0;
  }