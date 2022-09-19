
/* ATRIBUTOS */
#pragma once

class Pessoa //Em uma classe os elementos s�o privados por defini��o
{
protected:
    int dia;
    int mes;
    int ano;
    int idade;
    int id;
    char nome[30];

public:

    //Nao há valor default no dia mes e ano, pois essas infos sao obrigatorias!
    Pessoa(int dia_n, int mes_n, int ano_n, const char* getnome="");

    Pessoa(int i);

    // Chamada para zerar todos os atributos
    Pessoa(); // Se não fizermos isso, o compilador a cria
    //Por isso uma boa prática é sempre o programador cria-la e ter controle do que tem em seu escopo

    ~Pessoa();

    void setNome(char *n);

    char* getNome();

    void start(int dia_n, int mes_n, int ano_n, const char* getnome = "");
    void calc_idade(int dia_atual, int mes_atual, int ano_atual);
    void calc_idade_imprime(int dia_atual, int mes_atual, int ano_atual);
    void ImprimiIdade();
};
