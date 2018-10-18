#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

Matriz::Matriz(int nLinhas, int nColunas)
{
	Iniciar(nLinhas, nColunas);
}

Matriz::~Matriz()
{
	Apagar();
}

bool Matriz::PodeMultiplicar(const Matriz * pm)
{
	if (ncols == pm->nlinhas) 
		return true;
	else
		return false;
}

bool Matriz::PodeSomar(const Matriz * pm)
{
	if (ncols == pm->ncols && nlinhas == pm->nlinhas)
		return true;
	return false;
}

const Matriz Matriz::operator=(const Matriz & m1)
{
	int i = 0;
	return m1;
}

Matriz::Matriz() { //construtor por omissão
	
	Iniciar(0,0);
}

Matriz::Matriz(const Matriz & m1) 
{
	Iniciar(m1.nlinhas,m1.ncols);
	for (int i = 0; i < m1.nlinhas; i++) {
		for (int j = 0; j < m1.ncols; j++) { //inicialização
			elems[i][j]=m1.elems[i][j];
		}
	}
}

void Matriz::Apagar()
{
	for (int i = 0; i < nlinhas; i++) {
		delete[] elems[i];
		}
	delete[] elems;
	}

void Matriz::Iniciar(int l, int c) {
	nlinhas = l;
	ncols = c;
	elems = new float*[nlinhas];
	for (int i = 0; i < nlinhas; i++) { //alocação de memória
		elems[i] = new float[ncols];
	}

	for (int i = 0; i < nlinhas; i++) {
		for (int j = 0; j < ncols; j++) { //inicialização
			elems[i][j] = 0;
		}
	}
}

bool Matriz::Ler(const char *nome_ficheiro)
{
	FILE *ficheiro;
	ficheiro = fopen(nome_ficheiro, "r");
	if (ficheiro == NULL)
		return false;
	else {
		Apagar();
		fscanf(ficheiro,"%d %d", &nlinhas,&ncols);
		Iniciar(nlinhas, ncols);
		for (int i = 0; i < nlinhas; i++) {
			for (int j = 0; j < ncols; j++) { //inicialização
				fscanf(ficheiro,"%f",&elems[i][j]);
			}
		}
		return true;
	}
}

void Matriz::Escrever()
{
	for (int i = 0; i < nlinhas; i++) {
		for (int j = 0; j < ncols; j++) { //inicialização
			printf("%g ", elems[i][j]);
		}
		printf("\n");
	}
	
}


