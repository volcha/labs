#include <stdio.h>

int sise (int k) {
  int i;
  for (i = 1; i <= 8; i++) {
    if (i * i == k) {
      return (i);
    }
  }
}

int main () {
  int matr [65];
  int digit, k = 0, size, mi, ma, i, ima, imi, rez = 0;
  while (scanf("%d", &digit) != EOF) {
    k += 1;
    matr[k] = digit;
  }
  size = sise (k);
  mi = matr[1];
  imi = 1;
  ma = matr[1];
  ima = 1;
  for (i = 2; i <= k; i++) {
    if (matr[i] < mi) {
      mi = matr[i];
      imi = i;
    }
    if (matr[i] > ma) {
      ma = matr[i];
      ima = i;
    }
  }
  imi = imi / size;
  ima = ima % size;
  if (ima == 0) {
    ima = 3;
  }
  for (i = 1; i <= size; i++) {
    rez = rez + matr[imi * size + i] * matr[(i - 1) * size + ima];
  }
  printf ("%d\n", rez);
}
