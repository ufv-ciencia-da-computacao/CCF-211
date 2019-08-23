#ifndef __ALUNO_H__
#define __ALUNO_H__

typedef struct  {
  char nome[100];
  char matricula[7];
  char cpf[11];
  unsigned int periodo;
  Materia *materiaMatriculadas;
} Aluno;

void criarAluno(Aluno *aluno);
void alteraAluno(Aluno *aluno);
void adicionarMaterias(Aluno *aluno, Materia *materias);
void alterarMaterias(Aluno *aluno, Materia *materias);
void excluirMateria(Aluno *aluno, Materia *materias);
void imprime(Aluno *aluno);

#endif 