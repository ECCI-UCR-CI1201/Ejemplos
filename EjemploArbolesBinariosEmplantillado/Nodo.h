#pragma once

template<class T>
class Nodo {

	friend class ArbolBinario < T > ;

private:
	T actual, *hIzq, *hDer;

public:
	Nodo(T elemento) {
		this->actual = elemento;
		hIzq = 0;
		hDer = 0;
	}

	~Nodo() {

	}
};

