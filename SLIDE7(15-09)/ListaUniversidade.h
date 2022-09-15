#ifndef LISTAUNIVERSIDADE_H
#define LISTAUNIVERSIDADE_H

#include "Elem_univ.h"

class ListaUniversidade
{
private:

    int num_univ, cont_univ;
	char nome[150];

	Elem_univ* prim_univ;
	Elem_univ* atual_univ;

public:
    ListaUniversidade(int nu = 1000, char* n = "");
    ~ListaUniversidade();

    void setNome(char *n);
    void inclueUniv(Universidade* a);
	void listeUniv();
	void listeUniv2();

	Universidade* localizar(const char* n);




};

#endif // LISTAUNIVERSIDADE_H
