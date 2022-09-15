#include "Elem_departamento.h"
#include "stdafx.h"

Elem_departamento::Elem_departamento()
{
    //Aterrar os ponteiros
    p_proximo = NULL;
	p_anterior = NULL;
	header_dept = NULL;

}

Elem_departamento::~Elem_departamento()
{
    //Aterrar os ponteiros
    p_proximo = NULL;
	p_anterior = NULL;
	header_dept = NULL;
}

void Elem_departamento::setDept(Departamento* a){ header_dept = a; }
Departamento* Elem_departamento::getDept(){ return header_dept; }
char* Elem_departamento::getNome(){ return header_dept->getDept(); }
