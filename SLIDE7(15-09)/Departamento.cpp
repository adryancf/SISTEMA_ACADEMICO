#include "stdafx.h"
#include "Universidade.h"
#include "Departamento.h"


#include "Disciplina.h"
#include "ListaDisciplinas.h"

Departamento::Departamento()
{
	ObjLDisc = new ListaDisciplinas(-1, "");
	univ = NULL;
}

Departamento::~Departamento()
{
    if (ObjLDisc)
        delete ObjLDisc;
}

void Departamento::setDept(char* n){
     strcpy(nome_dept, n);
     ObjLDisc->setNome(n);

}
char* Departamento::getDept(){ return nome_dept; }

void Departamento::setUniv(Universidade *u){ univ = u; }
Universidade* Departamento::getUniversidade(){ return univ; }

void Departamento::incluaDisciplina(Disciplina* d){ ObjLDisc->inclueDisciplina(d); }
void Departamento::listeDisciplina(){ ObjLDisc->listeDisciplina(); }
void Departamento::listeDisciplina2(){ ObjLDisc->listeDisciplina2(); }
