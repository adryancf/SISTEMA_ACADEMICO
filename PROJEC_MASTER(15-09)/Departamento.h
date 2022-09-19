#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_


class Disciplina;
class Universidade;
class ListaDisciplinas;

class Departamento
{
private:
	char nome_dept[30];
	int id;
	Universidade *univ;

	ListaDisciplinas* ObjLDisc;

public:
	Departamento(int i = -1);
	~Departamento();

	void setDept(char* n);
	char* getDept();

	void setUniv(Universidade *u);
	Universidade* getUniversidade();

	void incluaDisciplina(Disciplina* d);
	void listeDisciplina();
	void listeDisciplina2();

};

#endif
