#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

typedef struct {
  char estado[50];
  char cpf[11];
  char nome[100];
  double preco;
} Compra;

void preenche();
void imprime(Compra *compra, int len);

int main () {
  return 0;
}

void preenche() {
  Compra compra[4];
  int i=0;
  do {
    printf("Estado: ");
    scanf("%s", compra[i].estado);
    printf("CPF: ");
    scanf("%s", compra[i].cpf);
    printf("Nome: ");
    scanf("%s", compra[i].nome);
    __fpurge(stdin);
    printf("Preco: ");
    scanf(" %lf", &compra[i].preco);
    __fpurge(stdin);
    i++;
  } while (!strcmp(compra[i].estado, "fim"));
  
  imprime(compra, 4);
  
}

void imprime(Compra *compra, int len) {
  for (int i = 0; i < 4; i++) {
    printf("Estado: %s\nCPF: \nNome: %s\nPreco: %lf\n", compra[i].estado, compra[i].cpf, compra[i].nome, compra[i].preco);
  }
}