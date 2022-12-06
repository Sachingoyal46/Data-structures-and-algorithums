// a-b of two array
#include <stdio.h>
void A_B(int a[], int m, int b[], int n) {
  int i = 0, j = 0, k = 0;
  int c[10];

  while (i < m && j < n) {
    if (a[i] > b[j]) {
      // c[k] = b[j];
      // k++;
      j++;
    } else {
      if (a[i] < b[j]) {
        c[k] = a[i];
        i++;
        k++;
      } 
      else {
        i++;
        j++;
      }
    }
  }
  while (i < m) {
    c[k] = a[i];
    i++;
    k++;
  }

  /*while (j < n) {
    c[k] = b[j];
    j++;
    k++;
  }*/
  for (i = 0; i < k; i++)
    printf(" %d", c[i]);
}

int main() {
  int a[5] = {1, 2, 3,  5};
  int b[5] = {3, 2, 9, 4, 3};
  A_B(a, 5, b, 5);
  return 0;
}
