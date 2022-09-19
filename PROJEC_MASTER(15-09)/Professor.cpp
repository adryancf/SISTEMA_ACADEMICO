#include "stdafx.h"
#include "Professor.h"


Professor::Professor(int dia_n, int mes_n, int ano_n, const char* getnome):
	Pessoa(dia_n, mes_n, ano_n, getnome) // Chama a construtora da classe base
{
	univ_Personal = NULL; dept_Personal = NULL;
}


Professor::Professor(int i):
	Pessoa(i) // Chama a construtora sem par�metros da classe base
{
	univ_Personal = NULL; dept_Personal = NULL;
}
Professor::~Professor()
{
	univ_Personal = NULL; dept_Personal = NULL;
}

void Professor::SetUniversidade(Universidade* u)
{
	univ_Personal = u;

}

void Professor::OndeTrabalho()
{
	printf("\n");

	if (univ_Personal != NULL)
		cout << nome << " trabalha para a " << univ_Personal->getnome() << endl;
}

void Professor::SetDepartamento(Departamento* a)
{
	dept_Personal = a;

}

void Professor::QualDepartamentoTrabalho()
{
	printf("\n");
	
	if (univ_Personal != NULL && dept_Personal != NULL)
		cout << nome << " trabalha na " << univ_Personal->getnome() << " no Departamento de " << dept_Personal->getDept() << endl;
}
