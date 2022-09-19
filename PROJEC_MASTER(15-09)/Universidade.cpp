#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade( int i ) { id = i; } 
Universidade::~Universidade(){}

void Universidade::set_nome(char* n){ strcpy(nome_universidade, (const char*)n); }
char* Universidade::getnome(){ return nome_universidade; }

void Universidade::inclueDept(Departamento* a){ ObjLdept.inclueDept(a); }
void Universidade::listeDept(){ ObjLdept.listeDept(); }
void Universidade::listeDept2() { ObjLdept.listeDept2(); }
