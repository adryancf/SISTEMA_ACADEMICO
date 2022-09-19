#include "stdafx.h"
#include "Pessoa.h"

#include <iostream>
using namespace std;

//Construtora (INICIALIZA AS VARIAVEIS)
Pessoa::Pessoa(int dia_n, int mes_n, int ano_n, const char* getnome)
{
    start(dia_n, mes_n, ano_n, getnome);
}
Pessoa::Pessoa(int i) { id = i; }
//Construtora sem parâmetros
Pessoa::Pessoa(){start(0, 0, 0);}
Pessoa::~Pessoa(){}

void Pessoa::setNome(char *n) { strcpy(nome, n); }
char* Pessoa::getNome(){ return nome; }

void Pessoa::start(int dia_n, int mes_n, int ano_n, const char* getnome)
{
    dia = dia_n;
    mes = mes_n;
    ano = ano_n;
    strcpy(nome, getnome);
    idade = 0;

}

void Pessoa::calc_idade(int dia_atual, int mes_atual, int ano_atual)
{
    idade = ((ano_atual)-(ano));

    if (mes_atual < mes)
        idade--;

    else if (mes_atual == mes) {
        if (dia_atual < dia)
            idade--;
    }

}
void Pessoa::calc_idade_imprime(int dia_atual, int mes_atual, int ano_atual)
{
    idade = ((ano_atual)-(ano));

    if (mes_atual < mes)
        idade--;

    else if (mes_atual == mes) {
        if (dia_atual < dia)
            idade--;
    }

    cout << "A idade de " << nome << " eh " << idade << "\n" << endl;

}

void Pessoa::ImprimiIdade()
{
    cout << "A idade de "<< nome <<" eh "<< idade <<"\n"<< endl;
}

