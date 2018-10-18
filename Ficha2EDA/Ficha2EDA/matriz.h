#pragma once
#define _CRT_SECURE_NO_WARNINGS

// Definição da classe Matriz que contem as operações
// tipicas de matrizes
class Matriz {
	private:
		float **elems;
		int nlinhas;
		int ncols;
		// Funções privadas
		void Apagar(); //DONE
		void Iniciar(int nLinhas, int nColunas); //DONE
	public:
		Matriz(); // Construtor de defeito DONE
		Matriz(const Matriz &m1); // Construtor Copia 
		Matriz(int nLinhas, int nColunas); //DONE
		~Matriz(); // Destrutor DONE
		bool PodeMultiplicar(const Matriz* pm);//DONE
		bool PodeSomar(const Matriz* pm);//DONE
		const Matriz operator = (const Matriz& m1);
		Matriz operator + (const Matriz& m1);
		Matriz operator * (const Matriz& m1);
		bool Ler(const char * nome_ficheiro);//DONE
		void Escrever();//DONE
		Matriz DecomporLU();
};