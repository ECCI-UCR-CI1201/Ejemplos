
#pragma once

#include "stdafx.h"

#include "Nodo.h"
#include "Iterador.h"
#include <iostream>
using namespace std;

template<class T>
class ArbolBinario {

	template<class T>
	friend ostream & operator<<(ostream &, ArbolBinario<T> &);

private:
	Nodo<T> * raiz;

public:
	ArbolBinario() {
		raiz = NULL;
	}

	virtual ~ArbolBinario() {
		if (raiz != NULL) {
			destruirRec(raiz);
		}
	}

	void insertar(T elemento) {
		Nodo<T> * nodo = new Nodo<T>(elemento);
		if (raiz == NULL) {
			raiz = nodo;
		} else {
			insertarRec(NULL, raiz, nodo);
		}
	}

	Iterador<T> begin() {
		return Iterador<T>(raiz);
	}

	Iterador<T> end() {
		return Iterador<T>(NULL);
	}

private:
	void insertarRec(Nodo<T> * padreActual, Nodo<T> * nodoActual,
		Nodo<T> * elemento) {
		if (nodoActual->actual < elemento->actual) {
			if (nodoActual->hIzq != NULL) {
				insertarRec(nodoActual, nodoActual->hIzq, elemento);
			} else {
				nodoActual->hIzq = elemento;
				elemento->padre = nodoActual;
			}
		} else {
			if (nodoActual->hDer != NULL) {
				insertarRec(nodoActual, nodoActual->hDer, elemento);
			} else {
				nodoActual->hDer = elemento;
				elemento->padre = nodoActual;
			}
		}
	}
	void imprimir(Nodo<T>* nodo, ostream& out, int profundidad) {
		if (nodo->hIzq != NULL) {
			imprimir(nodo->hIzq, out, profundidad + 1);
		}
		for (int i = 0; i < profundidad; ++i) {
			cout << "\t";
		}
		out << nodo->actual << endl;
		if (nodo->hDer != NULL) {
			imprimir(nodo->hDer, out, profundidad + 1);
		}
	}

	void destruirRec(Nodo<T> * nodo) {
		if (nodo->hIzq != NULL) {
			destruirRec(nodo->hIzq);
		}
		if (nodo->hDer != NULL) {
			destruirRec(nodo->hDer);
		}
		delete nodo;
	}
};

template<class T>
ostream & operator<<(ostream & out, ArbolBinario<T> & a) {
	a.imprimir(a.raiz, out, 0);
	return out;
}
