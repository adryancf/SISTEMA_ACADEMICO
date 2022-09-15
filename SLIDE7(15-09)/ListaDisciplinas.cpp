#include "stdafx.h"
#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int na, char* n)
{
	prim_disc = NULL;
	atual_disc = NULL;

	num_disc = na;
	cont_disc = 0;

	strcpy(nome, n);
}


ListaDisciplinas::~ListaDisciplinas()
{
    Elem_disciplina* aux;
    aux = prim_disc;

    while (prim_disc != NULL)
    {
        prim_disc = prim_disc->p_proximo;
        delete aux;
        aux = prim_disc;
    }

    atual_disc = NULL;

}

void ListaDisciplinas::setNome(char *n){ strcpy(nome, n); }

void ListaDisciplinas::inclueDisciplina(Disciplina* a)
{
    if (((cont_disc < num_disc) && (a != NULL)) || ((num_disc != 1) && (a != NULL)) )
    {
        //Usamos aux para nao DESFAZER a lista encadeada
        Elem_disciplina* aux = NULL;
        aux = new Elem_disciplina();

        aux->setDisc(a);

        if (prim_disc == NULL)
        {
            prim_disc = aux;
            atual_disc = aux;
        }
        else
        {
            atual_disc->p_proximo = aux;
            aux->p_anterior = atual_disc;
            atual_disc = aux;
        }
        cont_disc++;
    }
    else
    {
        if (a != NULL)
            cout << " Disciplina não incluida. Quantidade de disciplinas já lotadas em " << num_disc << " disciplinas " << endl;

        else
            cout << "Ponteiro da disciplina está nulo!!!" << endl;
    }

}

void ListaDisciplinas::listeDisciplina()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_disciplina* aux;
    aux = prim_disc;

    while (aux != NULL)
    {
        cout << " Disciplina " << aux->getNome() << " do Departamento " << nome << "\n" << endl;

        aux = aux->p_proximo;
    }

}

void ListaDisciplinas::listeDisciplina2()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_disciplina* aux;
    aux = atual_disc;

    while (aux != NULL)
    {
        cout << " Disciplina " << aux->getNome() << " do Departamento " << nome << "\n" << endl;
        aux = aux->p_anterior;
    }

}

int ListaDisciplinas::contaDisc()
{
    int cont = 0;
    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_disciplina* aux;
    aux = prim_disc;
    while (aux != NULL){ aux = aux->p_proximo; cont++;}
    return cont;

}


Disciplina* ListaDisciplinas::localizar(const char* n)
{
    Elem_disciplina* aux;
    aux = prim_disc;

    while (aux != NULL)
    {
        if(0 == strcmp((const char*)(aux->getNome()), n))
            return aux->getDisc();
        aux = aux->p_proximo;
    }

    return NULL;

}
