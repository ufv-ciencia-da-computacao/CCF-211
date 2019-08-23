#ifndef __MATERIA_H__
#define __MATERIA_H__

typedef struct {
  char codigo[6];
  char nome[100];
  char setor[1000];
} Materia;

void criarMateria(Materia *materia);
void alterarMateria(Materia *materia, char codigo);
void excluiMateria(Materia **materia, char codigo);
void imprimeMateria(Materia *materia);

#endif;