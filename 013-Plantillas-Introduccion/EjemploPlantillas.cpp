// EjemploPlantillas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matriz.h"

template<class T>
void imprimirMatriz();

template<class T> 
void imprimirNumero(T algo);

int _tmain(int argc, _TCHAR* argv[]) {
	srand((unsigned int)time(NULL));

	imprimirNumero(5);
	imprimirNumero(5.5);
	imprimirNumero('5');

	imprimirMatriz<int>();
	imprimirMatriz<double>();
	imprimirMatriz<char>();

	system("pause");
	return 0;
}

template<class T> 
void imprimirNumero(T algo) {
	cout << algo << endl;
}

template<class T>
void imprimirMatriz() {
	Matriz<T> m(5, 5);
	for (int i = 0; i < m.getFilas(); i++) {
		for (int j = 0; j < m.getColumnas(); j++) {
			m.set(i, j, random<T>());
		}
	}
	cout << m << endl;
}

template<class T>
T random() {
	return rand() % 100;
}

// Especializacion de template para char
template<>
char random<char>() {
	return rand() % 26 + 'a';
}

// Especializacion de template para double
template<>
double random<double>() {
	return (double) (rand() % 200) / 2.0;
}



