#include <stdio.h>
#define LEN 3


int main() {
  float sum=0;
  float vectorGrade[LEN];

  for (int i = 0; i < LEN; i++) {
    for (int j = 0; j < LEN; j++) {
      scanf("%f", &vectorGrade[i]);
      if (vectorGrade[i] < 0) {
        return -1;
      }
      
      sum += vectorGrade[i];
    }
    
    float media = (sum/TAM);

    if (media >= 90) {
      printf("Conceito: A\nParabens");
    } else if (media >= 70) {
      printf("Conceito: B\nMuito Bom");
    } else if (media >= 60) {
      printf("Conceito: C\nAprovado");
    } else if (media >= 40) {
      printf("Conceito: D\nAv. Final");
    } else if (media >= 1){
      printf("Conceito: E\nReprovado");
    } else {
      printf("Conceito: F\nPressimo");
    }

    sum = 0;
  }  

  return 0;
}