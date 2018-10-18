#define _CRT_SECURE_NO_WARNINGS
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	Matriz m;
	Matriz n;
	m.Ler("test.txt");
	m.Escrever();
	system("pause");

}