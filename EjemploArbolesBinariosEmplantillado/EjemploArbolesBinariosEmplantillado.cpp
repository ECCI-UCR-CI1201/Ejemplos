// EjemploArbolesBinariosEmplantillado.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArbolBinario.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	srand((unsigned int) time(NULL));

	ArbolBinario<int> a;

	for (int i = 0; i < 10; ++i) {
		a.insertar(rand() % 100);
	}

	cout << a << endl;

	system("pause");

	return 0;
}

