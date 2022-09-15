#include "stdafx.h"
#include "ListaUniversidade.h"

ListaUniversidade::ListaUniversidade(int na, char* n)
{
	prim_univ = NULL;
	atual_univ = NULL;

	num_univ = na;
	cont_univ = 0;

	strcpy(nome, n);
}


ListaUniversidade::~ListaUniversidade()
{
    Elem_univ* aux;
    aux = prim_univ;

    while (prim_univ != NULL)
    {
        prim_univ = prim_univ->p_proximo;
        delete aux;
        aux = prim_univ;
    }

    atual_univ = NULL;

}

void ListaUniversidade::setNome(char *n){ strcpy(nome, n); }

void ListaUniversidade::inclueUniv (Universidade* a)
{
    if (((cont_univ < num_univ) && (a != NULL)) || ((num_univ != 1) && (a != NULL)) )
    {
        //Usamos aux para nao DESFAZER a lista encadeada
        Elem_univ* aux = NULL;
        aux = new Elem_univ();

        aux->setUniv(a);

        if (prim_univ == NULL)
        {
            prim_univ = aux;
            atual_univ = aux;
        }
        else
        {
            atual_univ->p_proximo = aux;
            aux->p_anterior = atual_univ;
            atual_univ = aux;
        }
        cont_univ++;
    }
    else
    {
        if (a != NULL)
            cout << " DEpartamento n�o incluida. Quantidade de Departamentos lotadas em " << num_univ << endl;

        else
            cout << "Ponteiro de departamento est� nulo!!!" << endl;
    }

}

void ListaUniversidade::listeUniv()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_univ* aux;
    aux = prim_univ;
    int cont = 1;

    while (aux != NULL)
    {
        cout << cont << ":" << aux->getNome() << endl;
        cont++;
        aux = aux->p_proximo;
    }

}

void ListaUniversidade::listeUniv2()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_univ* aux;
    aux = atual_univ;

    while (aux != NULL)
    {
        cout << " Departamento " << aux->getNome() << " Pertence a " << nome << "\n" << endl;
        aux = aux->p_anterior;
    }

}
Universidade* ListaUniversidade::localizar(const char* n)
{
    Elem_univ* aux;
    aux = prim_univ;

    while (aux != NULL)
    {
        if(0 == strcmp(aux->getNome(), n))
            return aux->getUniv();
        aux = aux->p_proximo;
    }

    return NULL;

}
