#ifndef __COMPLEX_NUMBERS_H__
#define __COMPLEX_NUMBERS_H__

typedef struct {
  double realPart;
  double imaginaryPart;
} ComplexNumbers;

void init(ComplexNumbers *cpxNum, double realPart, double imaginaryPart);
void toString(ComplexNumbers *cpxNum);
void complexcpy(ComplexNumbers *src, ComplexNumbers *dest);
void sum(ComplexNumbers *a, ComplexNumbers *b, ComplexNumbers *result);
int isReal(ComplexNumbers *a);

#endif