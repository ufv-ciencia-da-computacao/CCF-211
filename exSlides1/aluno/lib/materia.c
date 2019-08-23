#include <stdio.h>
#include <stdlib.h>
#include "materia.h"

void criarMateria(Materia **materia) {
  printf("Nome: ");
  fgets(materia->nome, 100, stdin);
  printf("Setor: ");
  fgets(materia->setor, 1000, stdin);
  printf("Codigo: ");
  fgets(materia->codigo, 6, stdin);
}

int alterarMateria(Materia **materia, char codigo) {

}

void excluiMateria(Materia **materia, char codigo);
void imprimeMateria(Materia *materia) {
  printf("Nome: ");
  puts(materia->nome);
  printf("Setor: ");
  puts(materia->setor);
  pitnf("Codigo: ");
  puts(materia->setor);
}