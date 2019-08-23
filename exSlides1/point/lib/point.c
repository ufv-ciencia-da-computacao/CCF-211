#include <math.h>
#include <stdio.h>
#include "point.h"

void initPoint(Point *a, double X, double Y) {
  a->X = X;
  a->Y = Y;
}

void toString(Point *a) {
  printf("(%.5lf, %.5lf)\n", a->X, a->Y);
}

double euclideanDistance(Point *a, Point *b) {
  return sqrt(pow((b->X - a->X), 2) + pow((b->Y - a->Y), 2));
}

double norm(Point *a) {
  return sqrt(pow((a->X), 2) + pow((a->Y), 2));
}

double dotProduct(Point *a, Point *b) {
  return (a->X * b->X) + (a->Y * b->Y);
}

double angle(Point *a, Point *b) {
  return acos((dotProduct(a, b))/(norm(a)*norm(b))) * (180/PI);
}