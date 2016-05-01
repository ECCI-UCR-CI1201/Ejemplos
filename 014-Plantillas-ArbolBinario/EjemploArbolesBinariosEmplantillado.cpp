// EjemploArbolesBinariosEmplantillado.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArbolBinario.h"
#include "Persona.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	srand((unsigned int)time(NULL));

	ArbolBinario<int> a;
	for (int i = 0; i < 10; ++i) {
		a.insertar(rand() % 100);
	}
	cout << a << endl;

	ArbolBinario<double> b;
	for (int i = 0; i < 10; ++i) {
		b.insertar((double)(rand() % 100) / 5.0);
	}
	// cout << b << endl;

	ArbolBinario<Persona> c;
	Persona p1("Arbol", "1");
	Persona p2("Hoja", "2");
	Persona p3("Zeta", "3");

	c.insertar(p2);
	c.insertar(p1);
	c.insertar(p3);

	// cout << c << endl;

	cout << "Preincremento" << endl;
	// Probar Iteradores preincremento
	Iterador<int> itA = a.begin();
	while (itA != a.end()) {
		cout << *itA << endl;
		++itA;
	}
	cout << endl;

	cout << "Posincremento" << endl;
	// Probar Iteradores posincremento
	Iterador<int> itB = a.begin();
	while (itB != a.end()) {
		cout << *(itB++) << endl;
	}
	cout << endl;

	system("pause");

	return 0;
}

