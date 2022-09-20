#include "Aluno.h"
#include "stdafx.h"

Aluno::Aluno(int dia_n, int mes_n, int ano_n, const char* getnome) :
	Pessoa(dia_n, mes_n, ano_n, getnome)
{	
}
Aluno::Aluno(int i): Pessoa(i), RA(0){} 
Aluno::~Aluno(){} // Destrutora
void Aluno::setRA(int registro) { RA = registro; }

/* Essas fun��es existem pois as vari�veis do objeto s�o privadas */
int Aluno::getRA()
{
	return RA; 
} 
int getId(){return id;}