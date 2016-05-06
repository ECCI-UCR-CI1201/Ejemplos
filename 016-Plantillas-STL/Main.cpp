
#include "stdafx.h" // Archivos de encabezado precompilados
#include "Carta.h" // Clase Carta

using namespace std; // Namespace donde se define cout por ejemplo

bool compararCartas(const Carta* a, const Carta* b);

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
	for (int i = 0; i < 10; ++i) {
		// Los números aleatorios están entre 0 y 100
		listaEnteros.push_front(rand() % 100);
	}

	// Se imprimen todos los elementos de la lista utilizando un iterador
	for (list<int>::iterator it = listaEnteros.begin(); it != listaEnteros.end(); ++it) {
		cout << *it << endl;
	}

	list<Carta> listaCartas;
	char numeros[] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'D', 'J', 'Q', 'K' };
	int valor[] = { 14, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	char palos[] = { 'D', 'C', 'T', 'E' };
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			listaCartas.emplace_front(numeros[i], valor[i], palos[j]);
		}
	}

	for (list<Carta>::iterator it = listaCartas.begin(); it != listaCartas.end(); ++it) {
		cout << "La carta vale: " << (*it).getValor() << endl;
	}

	cout << "Cartas desordenadas:" << endl;
	for (list<Carta>::iterator it = listaCartas.begin(); it != listaCartas.end(); ++it) {
		cout << *it << endl;
	}

	listaCartas.sort();

	cout << "Cartas ordenadas:" << endl;
	for (list<Carta>::iterator it = listaCartas.begin(); it != listaCartas.end(); ++it) {
		cout << *it << endl;
	}

	list<Carta *> listaCartaPtr;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			listaCartaPtr.push_front(new Carta(numeros[i], valor[i], palos[j]));
		}
	}

	for (list<Carta *>::iterator it = listaCartaPtr.begin(); it != listaCartaPtr.end(); ++it) {
		cout << "La carta vale: " << (*it)->getValor() << endl;
	}

	for (int i = 0; i < 1000; i++) {
		list<Carta*>::iterator it1 = listaCartaPtr.begin();
		list<Carta*>::iterator it2 = listaCartaPtr.begin();

		int limite1 = rand() % listaCartaPtr.size();
		int limite2 = rand() % listaCartaPtr.size();

		for (int i = 0; i < limite1; i++) {
			++it1;
		}

		for (int i = 0; i < limite2; i++) {
			++it2;
		}

		Carta * tmp = *it1;
		*it1 = *it2;
		*it2 = tmp;
	}

	cout << "Cartas desordenadas:" << endl;
	for (list<Carta *>::iterator it = listaCartaPtr.begin(); it != listaCartaPtr.end(); ++it) {
		cout << **it << endl;
	}	

	listaCartaPtr.sort(compararCartas);

	cout << "Cartas ordenadas:" << endl;
	for (list<Carta *>::iterator it = listaCartaPtr.begin(); it != listaCartaPtr.end(); ++it) {
		cout << **it << endl;
	}


	for (list<Carta *>::iterator it = listaCartaPtr.begin(); it != listaCartaPtr.end(); ++it) {
		delete *it;
	}

    return 0;
}

bool compararCartas(const Carta* a, const Carta* b) {
	return a->getValor() == b->getValor() && a->getPalo() < b->getPalo() || a->getValor() < b->getValor();
}