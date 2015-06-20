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
	T& operator++() {
		if (anterior == actual->hIzq) {
			if (actual->hDer != NULL) {
				anterior = actual;
				actual = actual->hDer;
			}
			else {
				swap(actual, anterior);
			}
		}
		else if (anterior == actual->hDer) {
			swap(actual, anterior);
		}
		else{
			if (actual->hIzq != NULL) {
				anterior = actual;
				actual = actual->hIzq;
			}
			else {
				if (actual->hDer != NULL) {
					anterior = actual;
					actual = actual->hDer;
				}
				else {
					swap(actual, anterior);
				}
			}
		}
		return actual->actual;
	}

	void swap(Nodo<T> * a, Nodo<T> * b) {
		Nodo<T> * tmp = a;
		a = b;
		b = tmp;
	}

	// Posincremento
	//	T& operator++(){
	//}

	T operator*() {
		return actual->actual;
	}


};

