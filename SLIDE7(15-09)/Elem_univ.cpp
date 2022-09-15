#include "Elem_univ.h"
#include "stdafx.h"

Elem_univ::Elem_univ()
{
    p_proximo = NULL;
	p_anterior = NULL;
	header_univ = NULL;
}

Elem_univ::~Elem_univ()
{
    p_proximo = NULL;
	p_anterior = NULL;
	header_univ = NULL;
}
void Elem_univ::setUniv(Universidade* a){ header_univ = a; }
Universidade* Elem_univ::getUniv(){ return header_univ; }
const char* Elem_univ::getNome(){ return header_univ->getnome(); }



