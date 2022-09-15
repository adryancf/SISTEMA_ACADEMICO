#pragma once

#include "Elem_departamento.h"
//#include "Departamento.h"

class ListaDepartamento
{
private:
    int num_dept, cont_dept;
	char nome[150];

	Elem_departamento* prim_dept;
	Elem_departamento* atual_dept;

public:
    ListaDepartamento(int na = 1000);
    ~ListaDepartamento();

    void setNome(char *n);
    void inclueDept(Departamento* a);
	void listeDept();
	void listeDept2();

	Departamento* localizar(const char* n);

};


