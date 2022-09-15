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
            cout << " Aluno não incluido. Turma já lotada com " << num_alunos << endl;

        else
            cout << "Ponteiro do aluno está nulo!!!" << endl;
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
