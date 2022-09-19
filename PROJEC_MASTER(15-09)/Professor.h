#pragma once
#include "Pessoa.h"
#include "Universidade.h"


class Professor :
    public Pessoa
{
private:
    Universidade* univ_Personal;
    Departamento* dept_Personal;

public:
    Professor(int dia_n, int mes_n, int ano_n, const char* getnome = "");
    Professor(int i = -1);
    ~Professor();

    void SetUniversidade(Universidade* u);
    void OndeTrabalho();
    void SetDepartamento(Departamento* a);
    void QualDepartamentoTrabalho();


};

