#include <stdio.h>

int main () {
  int media[2] = {0,0};
  int tmp;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%d", &tmp);
      media[i] += tmp;
    }
    media[i] /= 12;
  }
  
  if (media[0] < media[1]) {
    printf("Aumentando\n");
  } else {
    printf("Diminuindo\n");
  }
  

  return 0;
}