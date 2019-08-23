#include <stdlib.h>
#include <stdio.h>
#include "./geometricShape.h"
#include "../libPoint/point.h"

void initGeomShape(GeometricShape *geomShape, int vertices, Point **p) {
  geomShape->vertices = vertices;
  geomShape->p = *p;
}

double area(GeometricShape *geomShape) {
  double sum = 0;
  for (int i = 0; i < geomShape->vertices; i++) {
    if (i + 1 > geomShape->vertices) {
      sum += ((geomShape->p[i].X * geomShape->p[0].Y) - (geomShape->p[i].Y * geomShape->p[0].X));
    } else {
      sum += ((geomShape->p[i].X * geomShape->p[i+1].Y) - (geomShape->p[i].Y * geomShape->p[i+1].X));
    }    
  }
  printf("Sum: %.5lf\n", sum);
  return (abs(sum)/2.);
}