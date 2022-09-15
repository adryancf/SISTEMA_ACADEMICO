#ifndef ELEM_UNIV_H
#define ELEM_UNIV_H

#include "Universidade.h"

class Elem_univ
{
private:

    Universidade *header_univ;

public:
    Elem_univ();
    ~Elem_univ();

    Elem_univ* p_proximo;
	Elem_univ* p_anterior;

	void setUniv(Universidade* a);
	Universidade* getUniv();

    const char* getNome();
};

#endif // ELEM_UNIV_H
