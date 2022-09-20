#pragma	once

#include "Elem_aluno.h"
#include "Aluno.h"

class ListaAlunos
{
private:

	int num_alunos, cont_alunos;
	char nome[150];

	//Lista duplamente encadeada de listaAlunos
	Elem_aluno* prim_aluno;
	Elem_aluno* atual_aluno;


public:

	ListaAlunos(int na = 45, char* n = "");
	//ListaAlunos(int na = 45);
	~ListaAlunos();

	void incluaAluno(Aluno* a);
	void listeAluno();
	void listeAluno2();

	void graveAlunos();
	void recAlunos();


};
