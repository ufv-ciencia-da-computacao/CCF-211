#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

typedef struct {
  unsigned int codigo;
  char nome[100];
  double preco;
  char paisOrigem[50];
  unsigned int quantidade;
  char corPredominante[20];
} Flor;

int strlenImpl(char* string);
int strcmpImpl(char* string1, char* string2);

int main () {

  int n;

  printf("Quantas flores:");
  scanf("%d", &n);

  Flor *f = (Flor*) malloc(n * sizeof(Flor));

  for (int i = 0; i < n; i++) {
    printf("Codigo: ");
    scanf("%d", &f[i].codigo);
    printf("Nome: ");
    scanf("%s", f[i].nome);
    printf("Preco: ");
    scanf("%lf", &f[i].preco);
    printf("Pais de origem: ");
    scanf("%s", f[i].paisOrigem);
    printf("Quantidade: ");
    scanf("%d", &f[i].quantidade);
    printf("Cor predominante: ");
    scanf("%s", f[i].corPredominante);
  }

  char nomeProcurado[100];

  printf("Nome a ser procurado:");
  scanf("%s", nomeProcurado);
  
  while (strcmpImpl(nomeProcurado, "sair")) {
    for (int i = 0; i < n; i++) {
      if (!strcmpImpl(f[i].nome, nomeProcurado)) {
        printf("Codigo: %d\nNome: %s\nPreco: %lf\nPais de origem: %s\nQuantidade: %d\nCor Predominante: %s", f[i].codigo, f[i].nome, f[i].preco, f[i].paisOrigem, f[i].quantidade, f[i].corPredominante
        );
        break;
      } 
    }
    __fpurge(stdin);
    printf("Nome a ser procurado:");
    scanf("%s", nomeProcurado);
  }
  
  

  return 0;
}

int strlenImpl(char* string) {
  int len=0;
  for (int i = 0; string[i] != '\0'; i++) {
    len++;
  }
  return len;
}

int strcmpImpl(char* string1, char* string2) {
  int tam1 = strlenImpl(string1);
  int tam2 = strlenImpl(string2);

  if (tam1 != tam2) {
    return 1;
  } else {
    for (int i = 0; string1[i] != '\0'; i++) {
      if (string1[i] > string2[i]) {
        return 1;
      } else if (string1[i] < string2[i]) {
        return -1;
      }
    }
  }
  
  return 0;
}