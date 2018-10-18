#define _CRT_SECURE_NO_WARNINGS
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	Matriz m;
	Matriz n(3,3);

	m.Ler("test.txt");
	m.Escrever();
	n.Escrever();

	printf("\n\n%d",m.PodeMultiplicar(&n));

	printf("\n\n%d\n", m.PodeSomar(&n));

	Matriz l(m);
	
	l.Escrever();



	system("pause");
}