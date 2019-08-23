#include <stdio.h>
#include <stdlib.h>
#include "./lib/geometricShape.h"
#include "./libPoint/point.h"

int main (){
  int vertices = 4;
  Point *p;
  dynPointArr(&p, vertices);

  GeometricShape geomShape;

  initPoint(&p[0], 4, 10);
  initPoint(&p[1], 9, 7);
  initPoint(&p[2], 11, 2);
  initPoint(&p[3], 2, 2);

  initGeomShape(&geomShape, vertices, &p);

  printf("Area: %.5lf\n", area(&geomShape));

  return 0;
}