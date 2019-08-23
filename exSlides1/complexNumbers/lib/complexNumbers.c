#include "complexNumbers.h"
#include <stdio.h>

void init(ComplexNumbers *cpxNum, double realPart, double imaginaryPart) {
  cpxNum->realPart = realPart;
  cpxNum->imaginaryPart = imaginaryPart;
}

void toString(ComplexNumbers *cpxNum) {
  printf("%.5lf + %.5lfi\n", cpxNum->realPart, cpxNum->imaginaryPart);
}

void complexcpy(ComplexNumbers *src, ComplexNumbers *dest) {
  init(&src, dest->realPart, dest->imaginaryPart);
}

void sum(ComplexNumbers *a, ComplexNumbers *b, ComplexNumbers *result) {
  result->realPart = a->realPart + b->realPart;
  result->imaginaryPart = a->imaginaryPart + b->imaginaryPart;
}

int isReal(ComplexNumbers *a) { 
  return a->imaginaryPart == 0 ? 1 : 0;
}