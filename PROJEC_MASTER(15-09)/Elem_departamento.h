#pragma once

#include "Departamento.h"

class Elem_departamento
{
private:

    Departamento* header_dept;

public:
    Elem_departamento();
    ~Elem_departamento();

    Elem_departamento* p_proximo;
	Elem_departamento* p_anterior;

	void setDept(Departamento* a);
	Departamento* getDept();

    char* getNome();

};

