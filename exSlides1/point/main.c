#include <stdlib.h>
#include <stdio.h>
#include "./lib/point.h"

int main() {
  Point pointA, pointB;

  initPoint(&pointA, -4, -9);
  initPoint(&pointB, -1, 2);

  toString(&pointA);
  toString(&pointB);

  printf("Euclidean Distance: %.5lf\n", euclideanDistance(&pointA, &pointB));
  printf("Norm Point A: %.5lf\nNorm Point B %.5lf\n", norm(&pointA), norm(&pointB));
  printf("Dot Prouct: %.5lf\n", dotProduct(&pointA, &pointB));
  printf("Angle: %.5lf\n", angle(&pointA, &pointB));
  return 0;
}