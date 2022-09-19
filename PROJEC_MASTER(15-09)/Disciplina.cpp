#include "Disciplina.h"
#include "stdafx.h"

Disciplina::Disciplina(int i)
{
    dept_associado = NULL;
    id = i;
}

Disciplina::~Disciplina()
{
    dept_associado = NULL;
}

void Disciplina::setid(int i){ id = i; }
int Disciplina::getID() { return id; }
void Disciplina::setNome(char* nome) { strcpy(nome_disc,(const char*) nome); }
char* Disciplina::getNome() { return nome_disc; }
void Disciplina::setAc(char *n){ strcpy(area_conhecimento, n); }
char* Disciplina::getAc() { return area_conhecimento; }


void Disciplina::setDept(Departamento* d)
{
    dept_associado = d;

    //(this) - Ponteiro para o Objeto que chamou a fun��o!!!
    d->incluaDisciplina(this);

}

Departamento* Disciplina::getDept() { return dept_associado; }
char* Disciplina::getNomeDept(){return dept_associado->getDept();}

void Disciplina::printArea() { cout << nome_disc << "esta na area de conhecimento de" << area_conhecimento << endl; }

void Disciplina::incluaAluno(Aluno* a) { ObjLAlunos.incluaAluno(a); }
void Disciplina::listAluno() { ObjLAlunos.listeAluno(); }
void Disciplina::listeAluno2() { ObjLAlunos.listeAluno2(); }




