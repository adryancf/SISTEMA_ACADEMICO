#pragma once

#include "Disciplina.h"

class Elem_disciplina
{
private:

    Disciplina* header_disc;

public:

    Elem_disciplina();
    ~Elem_disciplina();

    Elem_disciplina* p_proximo;
	Elem_disciplina* p_anterior;

	void setDisc(Disciplina* a);
	Disciplina* getDisc();

	const char* getNome();

};

