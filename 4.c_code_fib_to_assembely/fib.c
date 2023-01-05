#include <stdio.h>

int fib(int n) {
  if (n<2) return n;
  return (fib(n-1) + fib(n-2));
}

int main() {
  int ans = fib(16);
  printf("Answer is = %d",  ans);
  return 0;
}
