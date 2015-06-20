#pragma once

template<class T>
class Nodo {

	template <class T>
	friend class ArbolBinario;

	template <class T>
	friend class Iterador;

private:
	T actual;
	Nodo<T> *hIzq, *hDer;

public:
	Nodo(T elemento) {
		this->actual = elemento;
		hIzq = NULL;
		hDer = NULL;
	}

	~Nodo() {
	}

};

