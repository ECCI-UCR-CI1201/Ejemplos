
#include "stdafx.h"
#include "Matematico.h"

Matematico::Matematico() {
}

Matematico::~Matematico() {
}

// Por Copia
int Matematico::sumarCopia(int a, int b) {
	int resultado = a + b;
	a *= 2;
	b *= 2;
	cout << "A dentro: " << a << " B dentro: " << b << endl;
	return resultado;
}

// Por Puntero
int Matematico::sumarPuntero(int* a, int* b) {
	int resultado = *a + *b;
	*a *= 2;
	*b *= 2;
	cout << "A dentro: " << *a << " B dentro: " << *b << endl;
	a++;
	b++;
	cout << "Direccion A dentro: " << a << " Direccion B dentro: " << b << endl;
	return resultado;
}

// Por Referencia
int Matematico::sumarReferencia(int& a, int& b) {
	int resultado = a + b;
	a *= 2;
	b *= 2;
	cout << "A dentro: " << a << " B dentro: " << b << endl;
	return resultado;
}

