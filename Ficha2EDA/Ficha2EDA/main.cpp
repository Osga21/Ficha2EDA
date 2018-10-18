#define _CRT_SECURE_NO_WARNINGS
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	char filename[] = { "test.txt" };
	printf("%d",Matriz::Ler(filename));
	system("pause");
}