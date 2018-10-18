#define _CRT_SECURE_NO_WARNINGS
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	Matriz m;
	Matriz n(3,3);
	Matriz z;
	m.Ler("matriz1.txt");	
	z.Ler("matriz2.txt");
	m.Escrever();
	printf("\n");
	z.Escrever();

	Matriz k;

	Matriz l = m;
	k = m*l;
	printf("\n");

	k.Escrever();


	system("pause");
}