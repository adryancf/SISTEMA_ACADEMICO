#include "stdafx.h"
#include "ListaDepartamento.h"

ListaDepartamento::ListaDepartamento(int na)
{
	prim_dept = NULL;
	atual_dept = NULL;

	num_dept = na;
	cont_dept = 0;
}


ListaDepartamento::~ListaDepartamento()
{
    Elem_departamento* aux;
    aux = prim_dept;

    while (prim_dept != NULL)
    {
        prim_dept = prim_dept->p_proximo;
        delete aux;
        aux = prim_dept;
    }

    atual_dept = NULL;

}

void ListaDepartamento::setNome(char *n){ strcpy(nome, (const char*)n); }

void ListaDepartamento::inclueDept(Departamento* a)
{
    if (((cont_dept < num_dept) && (a != NULL)) || ((num_dept != 1) && (a != NULL)) )
    {
        //Usamos aux para nao DESFAZER a lista encadeada
        Elem_departamento* aux = NULL;
        aux = new Elem_departamento();

        aux->setDept(a);

        if (prim_dept == NULL)
        {
            prim_dept = aux;
            atual_dept = aux;
        }
        else
        {
            atual_dept->p_proximo = aux;
            aux->p_anterior = atual_dept;
            atual_dept = aux;
        }
        cont_dept++;
    }
    else
    {
        if (a != NULL)
            cout << " DEpartamento n�o incluida. Quantidade de Departamentos lotadas em " << num_dept << endl;

        else
            cout << "Ponteiro de departamento est� nulo!!!" << endl;
    }

}

void ListaDepartamento::listeDept()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_departamento* aux;
    aux = prim_dept;

    while (aux != NULL)
    {
        cout << " Departamento " << aux->getNome() << " Pertence a " << nome << "\n" << endl;

        aux = aux->p_proximo;
    }

}

void ListaDepartamento::listeDept2()
{

    //Usamos aux para nao DESFAZER a lista encadeada
    Elem_departamento* aux;
    aux = atual_dept;

    while (aux != NULL)
    {
        cout << " Departamento " << aux->getNome() << " Pertence a " << nome << "\n" << endl;
        aux = aux->p_anterior;
    }

}

Departamento* ListaDepartamento::localizar(const char* n)
{
    Elem_departamento* aux;
    aux = prim_dept;

    while (aux != NULL)
    {
        if(0 == strcmp((const char*)(aux->getNome()), n))
            return aux->getDept();
        aux = aux->p_proximo;
    }

    return NULL;

}
