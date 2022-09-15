#pragma once
#include "ListaDepartamento.h"

class Universidade
{
private:
    char nome_universidade[150];
    ListaDepartamento ObjLdept;

public:

	//Universidade();
	Universidade();
	~Universidade();

	void set_nome(char* n);
    char* getnome();

	void inclueDept(Departamento* a);
	void listeDept();
	void listeDept2();



};

