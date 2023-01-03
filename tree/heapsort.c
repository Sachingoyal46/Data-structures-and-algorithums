
#include <stdio.h>
#include<stdlib.h>
int swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void maxheapify(int a[], int i, int n) {
  int L, r, m;
  while (2 * i <= n) {
    L = 2 * i;
    r = 2 * i + 1;
    m = L;
    if (r <= n)
      if (a[r] > a[L]) {
        m = r;
      }
    if (a[m] > a[i]) {
      swap(a[m], a[i]);
    } else {
      break;
    }
  }
  i = m;
}

 void buildmaxheap(int a[], int n) {
  int i;
  for (i = n / 2; i <= 1; i--) {
    maxheapify(a, i, n);
  }
}


void heapsort(int a[], int n) {
  int j;
  buildmaxheap(a, n);
  for (j = n; j <= 2; j--) {
    swap(a[1], a[j]);
  maxheapify(a, 1, j - 1);
  }
}

int main() {
  int a[11] = {-1, 2, 4, 5, 11, 33, 10, 6, 55, 22, 11};
  heapsort(a, 10);
  for (int i = 1; i <= 9; i++) {
    printf("%d  ", a[i]);
  }
}