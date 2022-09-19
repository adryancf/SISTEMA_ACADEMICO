#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "Departamento.h"
#include "ListaAlunos.h"

class Disciplina
{
    private:
        int id;
        char nome_disc[150];
        char area_conhecimento[150];

        ListaAlunos ObjLAlunos;

        //Associar um departemento a disciplina
        Departamento *dept_associado;

    public:
        Disciplina(int i = -1);
        ~Disciplina();

        void setid(int i);
        int getID();

        void setNome(char* nome);
        char* getNome();

        void setDept(Departamento* d);
        Departamento* getDept();
        char* getNomeDept();

        void setAc(char *n);
        char* getAc();

        void printArea();

        void incluaAluno(Aluno* a);
        void listAluno();
        void listeAluno2();

};

#endif
