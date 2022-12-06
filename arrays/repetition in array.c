// check the element to be repeated
#include <stdio.h>
int main() {
  int a[8] = {2, 2, 3, 4, 5, 6, 5, 9};
  int n = 8, p, i;
  int c[10] = {0};

  printf("given array is:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  int max = 0;
  for (i = 0; i < n; i++) {

    if (a[i] > max) {

      max = a[i];
    }
  }

  for (i = 0; i < n; i++) {
    c[a[i]] = c[a[i]] + 1;
  }
  for (i = 0; i <= max; i++) {
    if (c[i] > 1) {
      printf("%d number is repeated\n", i);
    } else if (c[i] == 1) {
      printf("%d number is not repeated\n", i);
    } else {
      printf("%d number is missing\n", i);
    }
  }

  return 0;
}