#include <stdio.h>

int fib(int n) {
  return (n==1 || n==2)?1:fib(n)+fib(n);
}

int main () {
  int n;
  while (scanf("%d",&n)!=EOF) {
    printf("%d\n",fib(n));
  }
  return 0;
}
