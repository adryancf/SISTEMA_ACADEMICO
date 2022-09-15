#pragma once
#include "Pessoa.h"

//TESTANDO GITHUB
//AULA 8

class Aluno :
    public Pessoa
{
private:
    int RA;

public:

    Aluno(int dia_n, int mes_n, int ano_n, const char* getnome = "");
    Aluno(int i=-1);

    ~Aluno();

    void setRA(int registro);
    int getRA();
};

