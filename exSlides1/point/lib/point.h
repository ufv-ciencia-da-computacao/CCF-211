#ifndef __POINT_H__
#define __POINT_H__

#define PI 3.14159

typedef struct {
  double X;
  double Y;
} Point;

void initPoint(Point *a, double X, double Y);
void toString(Point *a);
double euclideanDistance(Point *a, Point *b);
double norm(Point *a);
double dotProduct(Point *a, Point *b);
double angle(Point *a, Point *b);

#endif