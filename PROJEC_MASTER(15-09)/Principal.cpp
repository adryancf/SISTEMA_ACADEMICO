
#include "stdafx.h"
#include "Principal.h"

Principal::Principal(){

	//Posso chamar as construtoras do objeto aqui!
	//Adryan(20, 10, 2004, "Adryan Castro"),
	//Einstein(14, 3, 1879, "Albert Einstein"),
	//Newton(4, 1, 1643, "Isaac Newton")

    Inicializa();
	Executar();


}

/* Colocar em ORDEM e CODIFICAR as funções */
/*
void GravarTudo();
	
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
*/



void Principal::Inicializa()
{
    InicializaUniversidade();
    InicializaDept();
    InicializaProfessores();
	InicializaAlunos();
    InicializaDisciplinas();
}
void Principal::InicializaUniversidade()
{
    UTFPR.set_nome("UTFPR");
    LUniv.inclueUniv(&UTFPR);
	Cambridge.set_nome("Cambridge");
	LUniv.inclueUniv(&Cambridge);
	Princeton.set_nome("Princeton");
	LUniv.inclueUniv(&Princeton);

}
void Principal::InicializaDept()
{
	DAINF.setDept("Informática");
	LDept.inclueDept(&DAINF);
	CALEM.setDept("Linguas Estrangeiras");
	LDept.inclueDept(&CALEM);
	Fisica_Pr.setDept("Física");
	LDept.inclueDept(&Fisica_Pr);
	Matematica_Cam.setDept("Matemática");
    LDept.inclueDept(&Matematica_Cam);

	AssociacaoDept_Univ();

}

void Principal::AssociacaoDept_Univ()
{
    DAINF.setUniv(&UTFPR);
	CALEM.setUniv(&UTFPR);
	Fisica_Pr.setUniv(&Princeton);
	Matematica_Cam.setUniv(&Cambridge);

	UTFPR.inclueDept(&DAINF);
	UTFPR.inclueDept(&CALEM);
	Princeton.inclueDept(&Fisica_Pr);
	Cambridge.inclueDept(&Matematica_Cam);

}
void Principal::InicializaProfessores()
{

	Adryan.start(20, 10, 2004, "Adryan Castro");
	Einstein.start(14, 3, 1879, "Albert Einstein");
	Newton.start(4, 1, 1643, "Isaac Newton");

	AssociacaoProfessores();

}
void Principal::AssociacaoProfessores()
{
	Adryan.SetUniversidade(&UTFPR);
	Einstein.SetUniversidade(&Princeton);
	Newton.SetUniversidade(&Cambridge);

	Adryan.SetDepartamento(&DAINF);
	Einstein.SetDepartamento(&Matematica_Cam);
	Newton.SetDepartamento(&Fisica_Pr);

}

void Principal::InicializaAlunos()
{
	Roberto.start(20, 8, 2003, "Roberto Silva");
	LAlunos.incluaAluno(&Roberto);
	Fernando.start(1, 11, 2004, "Fernando Alves");
	LAlunos.incluaAluno(&Fernando);
	Vinicius.start(6, 2, 2001, "Vinicius Pires");
	LAlunos.incluaAluno(&Vinicius);
	Mariana.start(15, 7, 2008, "Mariana Gonçalves");
	LAlunos.incluaAluno(&Mariana);
	Maria.start(10, 5, 2001, "Maria França");
	LAlunos.incluaAluno(&Maria);
	Adriana.start(5, 3, 1978, "Adriana Feres");
	LAlunos.incluaAluno(&Adriana);
	Daniel.start(21, 1, 1984, "Daniel Nunes");
	LAlunos.incluaAluno(&Daniel);
	Carlos.start(30, 9, 1995, "Carlos Antunes");
    LAlunos.incluaAluno(&Carlos);
}


void Principal::InicializaDisciplinas()
{


    ED1.setNome("Estrutura de dados 1");
    TECPROG.setNome("Tecnicas de Programação");
    FUNDAMENTOS.setNome("Fundamentos de Programação 1");

    LDisc.inclueDisciplina(&ED1);
    LDisc.inclueDisciplina(&TECPROG);
    LDisc.inclueDisciplina(&FUNDAMENTOS);

	ED1.setDept(&DAINF);
	TECPROG.setDept(&DAINF);
	FUNDAMENTOS.setDept(&DAINF);

	ED1.incluaAluno(&Roberto);
	ED1.incluaAluno(&Fernando);
	ED1.incluaAluno(&Mariana);
	ED1.incluaAluno(&Vinicius);

	TECPROG.incluaAluno(&Vinicius);
	TECPROG.incluaAluno(&Maria);
	TECPROG.incluaAluno(&Carlos);
	TECPROG.incluaAluno(&Roberto);
	TECPROG.incluaAluno(&Mariana);
	TECPROG.incluaAluno(&Fernando);
	TECPROG.incluaAluno(&Daniel);

	FUNDAMENTOS.incluaAluno(&Roberto);
	FUNDAMENTOS.incluaAluno(&Fernando);
	FUNDAMENTOS.incluaAluno(&Vinicius);
	FUNDAMENTOS.incluaAluno(&Mariana);
	FUNDAMENTOS.incluaAluno(&Daniel);
	FUNDAMENTOS.incluaAluno(&Carlos);
}

Principal::~Principal(){}

void Principal::Executar()
{

    /* Windows */
    /*
	SYSTEMTIME st;
	GetSystemTime(&st);

	dia_t = st.wDay;
	mes_t = st.wMonth;
	ano_t = st.wYear;
    */
    /* Linux */

    dia_t = 6;
    mes_t = 9;
    ano_t = 2022;


	printf("\n");

	cout << dia_t << " / " << mes_t << " / " << ano_t << endl;

	Menu();

	//CalcIdadeProfs();
	//UnivOndeProfsTrabalham();
	//DepOndeProfsTrabalham();
	//ListeDiscDeptos();
	//listAlunos();

}

void Principal::CalcIdadeProfs()
{
	Adryan.calc_idade_imprime(dia_t, mes_t, ano_t);
	Newton.calc_idade_imprime(dia_t, mes_t, ano_t);
	Einstein.calc_idade_imprime(dia_t, mes_t, ano_t);
}

void Principal::UnivOndeProfsTrabalham()
{
	Adryan.OndeTrabalho();
	Newton.OndeTrabalho();
	Einstein.OndeTrabalho();

}

void Principal::DepOndeProfsTrabalham()
{
	printf("\n");
	Adryan.QualDepartamentoTrabalho();
	printf("\n");
	Newton.QualDepartamentoTrabalho();
	printf("\n");
	Einstein.QualDepartamentoTrabalho();
	printf("\n");
}


/* Cadastro */

void Principal::CadDisciplina()
{

    int op;
    char nome_disciplina[200];
    char nome_departamento[200];

    char area_conhecimento[200];

    Disciplina* disc;
    Departamento* dept_associado;

    cout << "Insira o nome do Departamento associado: " << endl;
    cin >> nome_departamento;

    dept_associado = LDept.localizar(nome_departamento);

    if(dept_associado!=NULL)
    {
        cout << "Insira o nome da Disciplina: " << endl;
        cin >> nome_disciplina;

        disc = new Disciplina();

        disc->setNome(nome_disciplina);
        disc->setDept(dept_associado);
        dept_associado->incluaDisciplina(disc);

        cout << "Insira 1 se desejar inserir a area de conhecimento da disciplina: " << endl;
        cin >> op;

        if(op==1){
            cout << "Insira a Area de conhecimento de " << nome_disciplina << endl;
            cin >> area_conhecimento;
            disc->setAc(area_conhecimento);
        }

        LDisc.inclueDisciplina(disc);
        dept_associado->incluaDisciplina(disc);

        cout << "Disciplina Cadastrada!" << endl;

    }

    else{ cout << "Departamento inválido!" << endl; getchar();}
    getchar();

}

void Principal::CadUniv()
{
    char nome_univ[200];
    Universidade *univ;

    cout << "Insira o nome da Universidade: " << endl;
    cin >> nome_univ;

    univ = new Universidade();
    univ->set_nome(nome_univ);
    LUniv.inclueUniv(univ);

    cout << "Universidade cadastrada com sucesso!" << endl;
    getchar();
}

void Principal::CadDepartamento ()
{
    char nome_dept[150];
    char nome_universidade[150];

    Universidade *univ;
    Departamento *dept;

    cout << "Insira o nome da Universidade:" << endl;
    cin >> nome_universidade;

    univ = LUniv.localizar((const char*)nome_universidade);

    if(univ!=NULL){
        cout << "Insira o nome do Departameneto" << endl;
        cin >> nome_dept;

        dept = new Departamento();
        dept->setDept(nome_dept);
        dept->setUniv(univ);
        LDept.inclueDept(dept);

        univ->inclueDept(dept);

        cout << "Departamento Cadastrado!" << endl;
    }

    else{cout << "Universidade inválida!" << endl;}
    getchar();
}
void Principal::CadAluno ()
{
    char nome_aluno[1000];
    char disc_matricula[1000];
    int RA;

    int op;

    Aluno *a_add = new Aluno();
    Disciplina* disc_m;

    cout << "Insira o nome do Aluno:" << endl;
    cin >> nome_aluno;
    a_add->setNome(nome_aluno);

    cout << "Insira o RA do Aluno:" << endl;
    cin >> RA;
    a_add->setRA(RA);

    cout << "Aluno cadastrado com sucesso!" << endl;

    if(LDisc.contaDisc() != 0){
        cout << "Em qual das disciplinas voce deseja matricular" << nome_aluno << "?" << endl;
        LDisc.listeDisciplina();
        cin >> disc_matricula;

        disc_m = LDisc.localizar((const char*) disc_matricula);

        if(disc_m!=NULL){disc_m->incluaAluno(a_add);}
        else{cout << "Disciplina inválida!" << endl;}
    }


    LAlunos.incluaAluno(a_add);
    cout << "Aluno cadastrado com sucesso!" << endl;
    getchar();

}

void Principal::MenuCad()
{
    int op_menu = -1;

    while(op_menu != 5)
    {
        //Faz um clear no console
        //system("cls");
        system("clear");

        cout << "Informe sua opção: " << endl;
        cout << "1 - Cadastrar aluno" << endl;
        cout << "2 - Cadastrar disciplina" << endl;
        cout << "3 - Cadastrar departamento" << endl;
        cout << "4 - Cadastrar universidade" << endl;
        cout << "5 - Sair" << endl;
        cin >> op_menu;

        switch(op_menu){
            case 1:{ CadAluno(); }
                break;

            case 2:{ CadDisciplina(); }
                break;

            case 3:{ CadDepartamento(); }
                break;

            case 4:{ CadUniv();}
                break;

            case 5:{ cout << "FIM" << endl; getchar();}
                break;

            default:{ cout << " Caractere Inválido!" << endl; getchar(); }

        }
    }

}

void Principal::MenuExe()
{
    int op_menu = -1;

    while(op_menu != 5)
    {
        //Faz um clear no console
        //system("cls");
        //system("clear");

        cout << "Informe sua opção: " << endl;
        cout << "1 - Listar alunos" << endl;
        cout << "2 - Listar disciplinas" << endl;
        cout << "3 - Listar departamentos" << endl;
        cout << "4 - Listar Universidades" << endl;
        cout << "5 - Sair" << endl;
        cin >> op_menu;


        switch(op_menu){
            case 1:{ LAlunos.listeAluno(); fflush(stdin); getchar();}
                break;

            case 2:{ LDisc.listeDisciplina(); fflush(stdin); getchar();}
                break;

            case 3:{ LDept.listeDept(); fflush(stdin); getchar();}
                break;

            case 4:{ LUniv.listeUniv(); fflush(stdin); getchar();}
                break;

            case 5:{ cout << "FIM" << endl; getchar();}
                break;

            default:{ cout << " Caractere Inválido!" << endl; getchar(); }

        }
    }
}

void Principal::Menu()
{
    int op_menu = -1;
    while(op_menu != 3)
    {
        //Faz um clear no console
        //system("cls");
        system("clear");

        cout << "-------------- Bem vindo ao Sistema Acadêmico! -------------- \n" << endl;

        cout << "Informe sua opção: " << endl;
        cout << "1 - Cadastro" << endl;
        cout << "2 - Executar" << endl;
        cout << "3 - Sair" << endl;
        cin >> op_menu;

        switch(op_menu){
            case 1:{MenuCad();}
                break;

            case 2:{MenuExe();}
                break;

            case 3:{ cout << "Fim do Programa!" << endl;}
                break;

            default:{ cout << " Caractere Inválido!" << endl; getchar(); }

        }
    }
}
