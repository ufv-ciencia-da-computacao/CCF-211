#include <stdio.h>
#include <stdlib.h>

int main() {
  const int kmL = 16;

  float timeSpent, mediaSpeed;
  
  scanf("%f %f", &timeSpent, &mediaSpeed);
  
  printf("Spent Gas: %.2fL\n", (timeSpent*mediaSpeed)/(kmL));
  return 0;
}