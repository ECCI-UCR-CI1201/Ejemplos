// EjemploFactorial.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int factorial(int);

int _tmain(int argc, _TCHAR* argv[]){

	cout << 4 << "! es " << factorial(4) << endl;
	cout << 5 << "! es " << factorial(5) << endl;
	cout << 6 << "! es " << factorial(6) << endl;

	system("pause"); // Ejecuta el comando pausa del sistema operativo
	return 0;
}

int factorial(int n) {
	if (n > 1) {
		n *= factorial(n - 1);
	}
	return n;
}