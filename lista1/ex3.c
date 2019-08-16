#include <stdio.h>

int main() {
  int len = 0, greatest, shortest;
  int vectorAge[10000];
  int tmp;
  float media=0;

  for (int i = 0; ; i++) {
    scanf("%d", &tmp);
    if (tmp < 0) {
      break;
    }
    vectorAge[i] = tmp;
    len++;
  }
  
  for (int i = 0; i < len; i++) {
    if (i == 0) {
      greatest = vectorAge[i];
      shortest = vectorAge[i];
    } else {
      if (greatest < vectorAge[i]) {
        greatest = vectorAge[i];
      } else if (shortest > vectorAge[i]){
        shortest = vectorAge[i];
      }
    }
    media += vectorAge[i];
  }

  media /= len;
  
  printf("Greatest: %d\nShortest: %d\n Media: %.2f\n", greatest, shortest, media);

  return 0;
}