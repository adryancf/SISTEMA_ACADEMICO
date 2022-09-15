#include "Aluno.h"
#include "stdafx.h"

Aluno::Aluno(int dia_n, int mes_n, int ano_n, const char* getnome) :
	Pessoa(dia_n, mes_n, ano_n, getnome)
{	
}
Aluno::Aluno(int i){ RA = i; } // Contrutora so com RA
Aluno::~Aluno(){} // Destrutora
void Aluno::setRA(int registro) { RA = registro; }

/* Essas funções existem pois as variáveis do objeto são privadas */
int Aluno::getRA()
{
	return RA; 
} 
