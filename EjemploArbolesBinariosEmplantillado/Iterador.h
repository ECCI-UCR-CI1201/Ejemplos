#pragma once

#include "Nodo.h"

template<class T>
class Iterador {
private:
	Nodo<T> * anterior;
	Nodo<T> * actual;

public:

	Iterador(Nodo<T> * actual) {
		this->anterior = actual;
		this->actual = actual;
	}

	~Iterador() {
	}

	// Preincremento
	Iterador<T>& operator++() {
		bool continuar = true;
		while (continuar && actual != 0) {
			continuar = false;
			Nodo<T> * tmp = actual;
			if (actual != NULL && anterior == actual->hIzq) {
				if (actual->hDer != NULL) {
					actual = actual->hDer;
				} else {
					actual = actual->padre;
					continuar = true;
				}
			} else if (actual != NULL && anterior == actual->hDer) {
				actual = actual->padre;
				continuar = true;
			} else if (actual->hIzq != NULL) {
				actual = actual->hIzq;
			} else if (actual->hDer != NULL) {
				actual = actual->hDer;
			} else {
				actual = actual->padre;
				continuar = true;
			}
			anterior = tmp;
		}
		return *this;
	}

	// Posincremento
	Iterador<T> operator++(int) {
		Iterador<T> tmp(this->actual);
		++(*this);
		return tmp;
	}

	T operator*() {
		return actual->actual;
	}

	bool operator!=(Iterador<T> & otro) {
		return this->actual != otro.actual;
	}

	bool operator==(Iterador<T> & otro) {
		return this->actual == otro.actual;
	}

};

