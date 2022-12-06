#include <stdio.h>
int fib(int a) {
  if (a == 1)
    return 0;
  else if (a == 2)
    return 1;
  else
    return (fib(a - 1) + fib(a - 2));
}

int main() {
  int n, f, x, i;
  printf("enter the number\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    x = fib(i);
    printf("%d ", x);
  }
}
