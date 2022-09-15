#pragma once

#include "Professor.h"
#include "ListaAlunos.h"
#include "ListaDepartamento.h"
#include "ListaDisciplinas.h"
#include "ListaUniversidade.h"


class Principal
{
private:


    ListaAlunos LAlunos;
    ListaDepartamento LDept;
    ListaDisciplinas LDisc;

	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;

	Departamento DAINF, CALEM;
	Departamento Fisica_Pr;
	Departamento Matematica_Cam;

	//Instancio os objetos
	Professor Adryan;
	Professor Einstein;
	Professor Newton;

	//Alunos

	Aluno Roberto;
	Aluno Fernando;
	Aluno Vinicius;
	Aluno Mariana;
	Aluno Maria;
	Aluno Daniel;
	Aluno Carlos;
	Aluno Adriana;

	Disciplina ED1;
	Disciplina TECPROG;
	Disciplina FUNDAMENTOS;


    //CRIAR
    ListaUniversidade LUniv;

	int dia_t;
	int mes_t;
	int ano_t;

public:
	//Construtora
	Principal();

	//Destrutora: Tem a função de desalocar memória (Por padrão sem parâmetro)
	~Principal();

	//Inicializações

	void Inicializa();
    void InicializaUniversidade();
    void InicializaDept();
    void AssociacaoDept_Univ();
    void InicializaProfessores();
	void AssociacaoProfessores();
	void InicializaAlunos();
    void InicializaDisciplinas();

	//Execuções

	void Executar();

	void CalcIdadeProfs();
	void UnivOndeProfsTrabalham();
	void DepOndeProfsTrabalham();

    //Cadastros

    void CadDisciplina();
    void CadDepartamento();
    void CadAluno();
    void CadUniv();

    void Menu();
    void MenuCad();
    void MenuExe();

};
