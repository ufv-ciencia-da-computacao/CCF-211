#ifndef __GEOMETRIC_SHAPE_H__
#define __GEOMETRIC_SHAPE_H__

#include "../libPoint/point.h"

typedef struct{
  Point *p;
  int vertices;
} GeometricShape;

void initGeomShape(GeometricShape *geomShape, int vertices, Point **p);
double area(GeometricShape *geomShape);

#endif