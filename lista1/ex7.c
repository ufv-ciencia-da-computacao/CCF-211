#include <stdio.h>

unsigned long long int fatorial(unsigned long long int num);

int main () {

  unsigned long long int num;

  scanf("%llu", &num);
  printf("%llu\n", fatorial(num));

  return 0;
}

unsigned long long int fatorial(unsigned long long int num) {
  if (num == 0 || num == 1) {
    return 1;
  }

  return num * fatorial(num-1);
}