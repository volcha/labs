#include <stdio.h>

int main () {
  int n;
  while (scanf ("%d", &n) != EOF) {
    int count = 1, first, last, sign = 1, copy;
    copy = n;
    if (copy < 0) {
      sign = -1;
      copy *= -1;
      n *= -1;
    }
    last = copy % 10;
    while (copy >= 10) {
      count *= 10;
      copy /= 10;
    }
    first = copy;
    if (count == 1) {
      printf ("%d\n", n*sign);
    }
    else {
      if (count == 10) {
        copy = last * 10 + first;
        printf ("%d\n", copy * sign);
      }
      else {
        copy = last * count + ((n % count) / 10) * 10 + first;
        printf ("%d\n", copy * sign);
      }
    }
  }
}
