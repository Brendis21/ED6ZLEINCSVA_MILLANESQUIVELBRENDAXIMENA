#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define PILAS 10

using namespace std;

struct pila {
	int item[PILAS];
	int tope;
};
typedef struct pila PILA;




int push(PILA& p, int f);
int pop(PILA& p, int& f);
int pilasar(PILA p, int& f);
int empty(PILA p);
void startpila(PILA& p);




void torreHanoi(int n, PILA& A, PILA& B, PILA& C,
	PILA* a, PILA* b, PILA* c);
void mostrar(PILA C);




int main() {
	int n;




	PILA A, B, C;
	startpila(A);
	startpila(B);
	startpila(C);




	PILA* a = &A;
	PILA* b = &B;
	PILA* c = &C;




	cout<<("\t Bienvenido a las Torres de hanoi \t");

	cout<<("\n Introduzca la cantidad de elementos: ");
	scanf("%d", &n);

	cout<<("\n Iniciando la Torre A con elementos del 1 al 7", n);
	for (int i = n; i > 0; i--)
		push(A, i);
	cout<<("\nTorre llena");

	cout<<("\nLos elementos de la torre A son: ");
	mostrar(A);
	cout<<("\n\t");
	system("pause");

	torreHanoi(n, A, B, C, a, b, c);

	cout<<("\n\telementos movidos");
	cout<<("\nLos elementos de la Torre C son: ");
	mostrar(C);

	cout<<("\n\t");
	system("pause");
	return 0;
}



int push(PILA& p, int f) {
	if (p.tope == PILAS - 1)
		return 0;
	p.item[++p.tope] = f;
	return 1;
}



int pop(PILA& p, int& f) {
	if (empty(p))
		return 0;
	f = p.item[p.tope--];
	return 1;
}



int pilasar(PILA p, int& f) {
	if (empty(p))
		return 0;
	f = p.item[p.tope];
	return 1;
}



int empty(PILA p) {
	if (p.tope == -1)
		return 1;
	return 0;
}



void startpila(PILA& p) {
	p.tope = -1;
}



void torreHanoi(int n, PILA& A, PILA& B, PILA& C,
	PILA* a, PILA* b, PILA* c) {
	int f;
	char aux, aux1;




	if (a == &A)
		aux = 'A';
	else if (b == &A)
		aux = 'B';
	else if (c == &A)
		aux = 'C';

	if (a == &C)
		aux1 = 'A';
	else if (b == &C)
		aux1 = 'B';
	else if (c == &C)
		aux1 = 'C';




	if (n == 1) {
		pop(A, f);
		push(C, f);
		printf("\nElemento %d movido de la Torre %c a la Torre %c", n, aux, aux1);
	}else {
		torreHanoi(n - 1, A, C, B, a, b, c);
		pop(A, f);
		push(C, f);
		printf("\nElemento %d movido de la Torre %c a la Torre %c", n, aux, aux1);
		torreHanoi(n - 1, B, A, C, a, b, c);
	}

}




void mostrar(PILA C) {
	int e;
	while (pop(C, e))
		cout<<("%d", e);
		cout<<"\nBrenda Ximena Millan Esquivel";
}
