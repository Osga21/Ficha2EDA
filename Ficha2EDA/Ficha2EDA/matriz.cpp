#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

Matriz::Matriz() { //construtor por omissão
	elems = NULL;
	nlinhas = 0;
	ncols = 0;
}

Matriz::Matriz(int l, int c) {
	nlinhas = l;
	ncols = c;
	elems = new float*[nlinhas];
	for (int i = 0; i < nlinhas; i++) { //alocação de memória
		elems[i] = new float[ncols];
	}

	for (int i = 0; i < nlinhas; i++) {
		for (int j = 0; j > nlinhas; j++) { //inicialização
			elems[i][j] = 0;
		}
	}
}

bool Matriz::Ler(char * nome_ficheiro)
{
	FILE *ficheiro;
	ficheiro = fopen(nome_ficheiro, "r");
	if (ficheiro == NULL)
		return false;
	else {
		
		return true;
	}
}

void Matriz::Escrever()
{
	
}

