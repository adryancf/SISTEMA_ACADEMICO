#pragma once

#include "Professor.h"
#include "ListaAlunos.h"
#include "ListaDepartamento.h"
#include "ListaDisciplinas.h"
#include "ListaUniversidade.h"


class Principal
{
private:
 
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

	
    	ListaUniversidade LUniv;
	ListaDepartamento LDept;
	ListaDisciplinas LDisc;
	ListaAlunos LAlunos;
	
	
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

	void CadUniv();
	void CadDepartamento();
	void CadDisciplina();
	void CadAluno();
	
	void Menu();
	void MenuCad();
	void MenuExe();
	
	voidGravarTudo();
	
	void GravarUniversidades();
	void GravarDepartamentos();
	void GravarDisciplinas();
	void GravarAlunos();
	void GravarProfessores();
	
	void RecuperarTudo();
	
	void RecuperarUniversidades();
	void RecuperarDepartamentos();
	void RecuperarDisciplinas();
	void RecuperarAlunos();
	void RecuperarProfessores();
	
		

};
