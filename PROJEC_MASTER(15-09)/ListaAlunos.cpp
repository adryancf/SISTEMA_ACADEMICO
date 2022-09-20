#include "stdafx.h"
#include "ListaAlunos.h"


ListaAlunos::ListaAlunos(int na, char* n)
{
	prim_aluno = NULL;
	atual_aluno = NULL;
	cont_alunos = 0;
	num_alunos = na;

	strcpy(nome, n);
}


ListaAlunos::~ListaAlunos()
{
    Elem_aluno* aux;
    aux = prim_aluno;

    while (prim_aluno != NULL)
    {
        prim_aluno = prim_aluno->p_proximo;
        delete aux;
        aux = prim_aluno;
    }

    atual_aluno = NULL;

}

void ListaAlunos::incluaAluno(Aluno* a)
{
    if ((cont_alunos < num_alunos) && (a != NULL))
    {
        //Usamos aux para nao DESFAZER a lista encadeada
        Elem_aluno* aux = NULL;
        aux = new Elem_aluno();

        aux->setAluno(a);

        if (prim_aluno == NULL)
        {
            prim_aluno = aux;
            atual_aluno = aux;
        }
        else
        {
            atual_aluno->p_proximo = aux;
            aux->p_anterior = atual_aluno;
            atual_aluno = aux;
        }
        cont_alunos++;
    }
    else
    {
        if (a != NULL)
            cout << " Aluno n�o incluido. Turma j� lotada com " << num_alunos << endl;

        else
            cout << "Ponteiro do aluno est� nulo!!!" << endl;
    }

}

void ListaAlunos::listeAluno()
{

    cout << "Teste" << endl;

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_aluno* aux;
    aux = prim_aluno;

    while (aux != NULL)
    {
        cout << " Aluno " << aux->getNome() << " matriculado em " << nome << "\n" << endl;

        aux = aux->p_proximo;
    }

}

void ListaAlunos::listeAluno2()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_aluno* aux;
    aux = atual_aluno;

    while (aux != NULL)
    {
        cout << " Aluno " << aux->getNome() << " matriculado em " << nome << "\n" << endl;
        aux = aux->p_anterior;
    }

}

void ListaAlunos::graveAlunos()
{

    ofstream gravadorAlunos ( "alunos.dat", ios::out );
    if ( !gravadorAlunos )
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush ( stdin );
        getchar( );
        return;
    }

    Elem_aluno* aux_elm;
    aux_elm = atual_aluno;
    
    while ( aux_elm != NULL)
    {
        Aluno * aux_a;
        aux_a = aux_elm->getAluno();
        gravadorAlunos << aux_a->getId () << ' ' << aux_a->getRA () << ' ' << aux_a->getNome () << endl;
        aux_elm = aux_elm->p_proximo;
    }

    gravadorAlunos.close ( );


}
void recAlunos()
{

    ifstream recAlunos ( "alunos.dat", ios::in );
    if ( !recAlunos )
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush ( stdin );
        getchar( );
        return;
    }

    Aluno * aux_a = NULL;
    int id, RA;
    char nome[150];

    while ( recAlunos >> id >> RA >> nome;)
    {
        if(0 != strcmp(nome, ""))
        {
            aux_a = new Aluno(id);
            aux_a->setRA(RA);
            aux_a->setNome(nome);

            incluaAluno(aux_a);
        }

    }

    recAlunos.close ();



}

