
#include "stdafx.h"

using namespace std;

void imprimirPiramide(int);

int _tmain(int argc, _TCHAR* argv[]) {

	imprimirPiramide(3);
	imprimirPiramide(5);

	cout << "Digite una cantidad de lineas: " << endl;

	int n;
	cin >> n;

	imprimirPiramide(n);

	system("pause");
	return 0;
}

void imprimirPiramide(int n) {
	cout << "Piramide de " << n << " lineas" << endl;
	if (n >= 3) {
		// Imprimir cada línea
		for (int i = 0; i < n; ++i) {
			// Imprimir espacios
			for (int j = 0; j < n - i - 1; ++j) {
				cout << '-';
			}
			// Imprimir simbolos
			for (int j = 0; j < 2 * i + 1; ++j) {
				if (i % 2 == 0) {
					cout << '+';
				} else {
					cout << '*';
				}
			}
			// Imprimir espacios
			for (int j = 0; j < n - i - 1; ++j) {
				cout << '-';
			}
			cout << endl;
		}
		cout << endl;
	} else {
		cerr << "Numero de lineas invalido" << endl;
	}
}
