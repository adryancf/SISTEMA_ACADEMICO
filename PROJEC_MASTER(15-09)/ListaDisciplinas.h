#ifndef LISTADISCIPLINAS_H
#define LISTADISCIPLINAS_H

#include "Elem_disciplina.h"
#include "Disciplina.h"

class ListaDisciplinas
{
private:

    int num_disc, cont_disc;
	char nome[150];

	//Lista duplamente encadeada de listaAlunos
	Elem_disciplina* prim_disc;
	Elem_disciplina* atual_disc;

public:

    ListaDisciplinas(int na = 1000, char *n = "");
    ~ListaDisciplinas();
    void setNome(char *n);
    void inclueDisciplina(Disciplina* a);
	void listeDisciplina();
	void listeDisciplina2();
	int contaDisc();

	Disciplina* localizar(const char* n);
};

#endif
