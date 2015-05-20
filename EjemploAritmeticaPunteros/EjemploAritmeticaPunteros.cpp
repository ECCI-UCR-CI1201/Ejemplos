 
#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	int n = 10;

	// Creación de un vector
	int * p = new int[n];
	for (int i = 0; i < n; ++i) {
		p[i] = i + 1;
	}

	// Recorrido del vector
	for (int i = 0; i < n; ++i) {
		cout << p[i] << " ";
	}
	cout << endl;

	// Recorrido usando aritmetica de punteros
	for (int * i = p; i < p + n; i++) {
		(*i)++;
		cout << *i << " ";
	}
	cout << endl;

	// Algo oscuro
	int v = 256 * 256 - 1;
	char * perro = (char *) &v; // Sugerido por David
	cout << "V original: " << v << endl;
	for (char * i = perro; i < perro + 4; ++i) {
		cout << (int) ((unsigned char) *i) << " "; // Muy oscuro
		(*i)++; // Algo más oscuro
	}
	cout << endl;
	cout << "V modificado: " << v << endl;

	system("pause");
	return 0;
}

