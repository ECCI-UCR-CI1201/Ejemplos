// 001-Introduccion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gato.h"
using namespace std;

int _tmain(int argc, _TCHAR *argv[]) {

	// Tipos de datos primitivos
	char a = 'a';
	wchar_t a1 = L'b';
	short b = 2;
	int c = 0x1010;
	long d = 4;
	float e = 4.4f;
	double f = 5.5;
	bool g = false;

	cout << "char: " << a << endl;
	wcout << "wchar_t: " << a1 << endl;
	cout << "short: " << b << endl;
	cout << "int: " << c << endl;
	cout << "long: " << d << endl;
	cout << "float: " << e << endl;
	cout << "double: " << f << endl;
	cout << "bool: " << g << endl;


	unsigned int h = -1;
	cout << "unsigned int: " << h << endl;

	long long d1 = 102312;
	cout << "unsigned int: " << d1 << endl;

	long double f1 = 5.0;
	cout << "long double: " << f1 << endl;

	// Size of
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of char *: " << sizeof(char *) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of long double : " << sizeof(long double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	cout << "Size of Gato : " << sizeof(Gato) << endl;



	// Cosas raras

	int x = 0x01020304;
	char * vector = (char *) &x;
	/*for (int i = 0; i < sizeof(int); ++i) {
		vector[i] = *(&x + i);
	}*/

	// Little Endian
	for (int i = 0; i < sizeof(int); ++i) {
		cout << "Char " << i << " " << (unsigned int)vector[i] << endl;
	}

	// Operadores
	

	// Estructuras condicionales

	int xyz = 123;

	if (xyz = 0) { // No hacer esto
		cout << "Se ejecuta el if" << endl;
	}
	else {
		cout << "No se ejecuta el if" << endl;
	}

	if (xyz) {

	}

	switch (xyz) {
	case 0:
		cout << "Es 0" << endl;
		break;
	default:
		break;
	}

	for (int i = 0; xyz == 0 && 1 == 2; ++i) {

	}

	while (false) {

	}

	do {

	} while (false);



	int vectorEstatico[5];
	int matrizEstatica[5][5];

	int * puntero1 = new int;
	*puntero1 = 5;

	cout << *puntero1 << endl;
	puntero1 += 200000;
	cout << *puntero1 << endl;


	system("pause");
    return 0;
}

