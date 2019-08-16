#include <stdio.h>
#include <stdlib.h>

int *bubbleSort(int *arr, int len);

int main () {

  int n;
  scanf("%d", &n);
  
  int *arr = (int*) malloc (n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  arr = bubbleSort(arr, n);
  
  printf("Menores: ");
  for (int i = 0; i < n/2; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("Maiores: ");
  for (int i = n/2; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

int *bubbleSort(int *arr, int len) {
  int trocado = 1, aux;

  while (trocado) {
    trocado = 0;
    for (int i = 0; i < len-1; i++) {
      if (arr[i] > arr[i+1]) {
        aux = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = aux;
        trocado = 1;
      }
    }
  }

  return arr;
}