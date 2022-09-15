#pragma once

#include "Aluno.h"

class Elem_aluno
{
private:

	Aluno* header_aluno;

public:

	Elem_aluno();
	~Elem_aluno();

	Elem_aluno*p_proximo;
	Elem_aluno*p_anterior;

	void setAluno(Aluno* a);
	Aluno* getAluno();

	const char* getNome();

};

