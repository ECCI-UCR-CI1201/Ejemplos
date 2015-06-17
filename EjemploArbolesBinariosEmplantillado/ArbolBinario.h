
#pragma once

#include "stdafx.h"

#include "Nodo.h"
#include <iostream>
using namespace std;

template<class T>
class ArbolBinario {

	template<class T>
	friend ostream & operator<<(ostream &, ArbolBinario &);

private:
	Nodo<T> * raiz;

public:
	ArbolBinario(){
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
		}
		else {
			insertarRec(raiz, nodo);
		}
	}

private:
	void insertarRec(Nodo<T> * nodoActual,
		Nodo<T> * elemento) {
		if (nodoActual->actual < elemento->actual) {
			if (nodoActual->getHijoIzq() != NULL) {
				insertarRec(nodoActual->getHijoIzq(), elemento);
			}
			else {
				nodoActual->setHijoIzq(elemento);
			}
		}
		else {
			if (nodoActual->getHijoDer() != NULL) {
				insertarRec(nodoActual->getHijoDer(), elemento);
			}
			else {
				nodoActual->setHijoDer(elemento);
			}
		}
	}
	void imprimir(Nodo<T>* nodo, ostream& out, int profundidad) {
		if (nodo->getHijoIzq() != NULL) {
			imprimir(nodo->getHijoIzq(), out, profundidad + 1);
		}
		for (int i = 0; i < profundidad; ++i) {
			cout << "\t";
		}
		out << *nodo << endl;
		if (nodo->getHijoDer() != NULL) {
			imprimir(nodo->getHijoDer(), out, profundidad + 1);
		}
	}

	void destruirRec(Nodo<T> * nodo) {
		if (nodo->getHijoIzq() != NULL) {
			destruirRec(nodo->getHijoIzq());
		}
		if (nodo->getHijoDer() != NULL) {
			destruirRec(nodo->getHijoDer());
		}
		// Primero se destruye a los hijos y luego al padre.
		delete nodo;
	}

};

template<class T>
ostream & operator<<(ostream & out, ArbolBinario<T> & a) {
	a.imprimir(a.raiz, out, 0);
	return out;
}
