#include <stdio.h>
#include <stdlib.h>
#include "lib/complexNumbers.h"

int main() {
  ComplexNumbers a, b;

  init(&a, 1, 0);
  toString(&a);
  complexcpy(&a, &b);
  sum(&a, &b, &a);
  toString(&a);
  if (isReal(&a)) {
    printf("É um numero Real\n");
  } else {
    printf("Nao e um numero Real\n");
  }
  


 return 0;
}