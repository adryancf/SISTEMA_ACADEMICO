#pragma once
#include "ListaDepartamento.h"

class Universidade
{
private:
    char nome_universidade[150];
	int id;
    ListaDepartamento ObjLdept;

public:

	//Universidade();
	Universidade(int i = -1);
	~Universidade();

	void set_nome(char* n);
    char* getnome();

	void inclueDept(Departamento* a);
	void listeDept();
	void listeDept2();



};

