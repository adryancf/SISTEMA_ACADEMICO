#include "Elem_disciplina.h"
#include "stdafx.h"

Elem_disciplina::Elem_disciplina()
{
    //Aterrar os ponteiros
    p_proximo = NULL;
	p_anterior = NULL;
}

Elem_disciplina::~Elem_disciplina()
{
    //Aterrar os ponteiros
    p_proximo = NULL;
	p_anterior = NULL;
}

void Elem_disciplina::setDisc(Disciplina* a){ header_disc = a; }
Disciplina* Elem_disciplina::getDisc(){ return header_disc; }
const char* Elem_disciplina::getNome(){ return header_disc->getNome(); }
