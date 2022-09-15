#include "Elem_aluno.h"
#include "stdafx.h"

Elem_aluno::Elem_aluno()
{
	p_proximo = NULL;
	p_anterior = NULL;
}

Elem_aluno::~Elem_aluno()
{
	p_proximo = NULL;
	p_anterior = NULL;
}

void Elem_aluno::setAluno(Aluno* a){ header_aluno = a; }
Aluno* Elem_aluno::getAluno() { return header_aluno; }
const char* Elem_aluno::getNome() { return header_aluno->getNome();}



