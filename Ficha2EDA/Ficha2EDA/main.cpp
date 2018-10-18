#define _CRT_SECURE_NO_WARNINGS
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	Matriz m;
	Matriz z;
	Matriz n(3, 3); //usando construtor por defeito

	m.Ler("matriz1.txt");	//matriz usando ficheiro
	z.Ler("matriz2.txt");

	m.Escrever(); //escrita de matriz
	printf("\n");
	z.Escrever();

	Matriz k;
	Matriz l = m; //Operador =

	k = m*l;//Operador *
	printf("\n");
	k.Escrever();

	Matriz s;
	s = l + m;//Operador +


	system("pause");
}