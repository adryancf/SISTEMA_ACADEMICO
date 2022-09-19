#pragma once

#include "Professor.h"
#include "ListaAlunos.h"
#include "ListaDepartamento.h"
#include "ListaDisciplinas.h"
#include "ListaUniversidade.h"


class Principal
{
private:

	//Contadores
	int id_alunos = 0;
	int id_prof = 0;
	int id_univ = 0;
	int id_dept = 0;
	int id_disc = 0;

	Universidade UTFPR {id_univ++};
	Universidade Princeton {id_univ++};
	Universidade Cambridge {id_univ++};

	Departamento DAINF {id_dept++}, CALEM {id_dept++};
	Departamento Fisica_Pr {id_dept++};
	Departamento Matematica_Cam {id_dept++};

	//Instancio os objetos
	Professor Adryan {id_prof++};
	Professor Einstein {id_prof++};
	Professor Newton {id_prof++};

	//Disciplinas
	Disciplina ED1 {id_disc++};
	Disciplina TECPROG {id_disc++};
	Disciplina FUNDAMENTOS {id_disc++};
	
	//Alunos
	Aluno Roberto {id_alunos++};
	Aluno Fernando {id_alunos++};
	Aluno Vinicius {id_alunos++};
	Aluno Mariana {id_alunos++};
	Aluno Maria {id_alunos++};
	Aluno Daniel {id_alunos++};
	Aluno Carlos {id_alunos++};
	Aluno Adriana {id_alunos++};

	ListaAlunos LAlunos;
    ListaDepartamento LDept;
    ListaDisciplinas LDisc;
    ListaUniversidade LUniv;

	int dia_t;
	int mes_t;
	int ano_t;

public:
	//Construtora
	Principal();

	//Destrutora: 
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
