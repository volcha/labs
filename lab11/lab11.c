#include <stdio.h>

int main () {
  int n, digit, copy;
  while (scanf ("%d", &n) != EOF) {
    copy = n;
    if (n < 0) {
      copy = n * (-1);
    }
    if (copy % 3 == 0) {
      while (copy >= 10) {
        digit = copy % 10;
        if (digit > 2) {
          break;
        }
        copy = copy / 10;
      }
      if (copy < 3) {
        printf ("%d\n", n);
      }
    }
  }
  return 0;
}
