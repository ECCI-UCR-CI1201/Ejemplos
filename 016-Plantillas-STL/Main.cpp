
#include "stdafx.h" // Archivos de encabezado precompilados

using namespace std; // Namespace donde se define cout por ejemplo

/**
 * Punto de entrada de la aplicación.
 */
int _tmain() {

	// Se inicializa la semilla de valores aleatorios
	// con el tiempo actual
	srand(time(NULL));

	// Se crea una lista de int
	list<int> listaEnteros;

	// Se insertan 100 valores aleatorios en la lista
	for (int i = 0; i < 100; ++i) {
		// Los números aleatorios están entre 0 y 100
		listaEnteros.push_front(rand() % 100);
	}

	// Se imprimen todos los elementos de la lista utilizando un iterador
	for (list<int>::iterator it = listaEnteros.begin(); it != listaEnteros.end(); ++it) {
		cout << *it << endl;
	}

    return 0;
}

