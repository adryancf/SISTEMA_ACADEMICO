#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade()
{

	//inicializando o vetor
    /*
	list<Departamento*>::iterator it;
	for (it = dept_Univ.begin(); it != dept_Univ.end(); it++) {
		(*it) = NULL;
	}
	*/
}

Universidade::~Universidade()
{

}

void Universidade::set_nome(char* n){ strcpy(nome_universidade, (const char*)n); }
char* Universidade::getnome(){ return nome_universidade; }

//void Universidade::set_Dept(Departamento* a){ dept_Univ.push_back(a); }

void Universidade::inclueDept(Departamento* a){ ObjLdept.inclueDept(a); }
void Universidade::listeDept(){ ObjLdept.listeDept(); }
void Universidade::listeDept2() { ObjLdept.listeDept2(); }


/*/
void Universidade::print_Dept()
{
	list<Departamento*>::iterator i;
	for (i = dept_Univ.begin(); i != dept_Univ.end(); i++)
    {
		if ((*i) != NULL)
			cout << (*i)->getDept() << endl;
	}

}

/*/
