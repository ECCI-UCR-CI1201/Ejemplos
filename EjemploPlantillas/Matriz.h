
#pragma once

#include "stdafx.h"
using namespace std;

template<class T> 
class Matriz {

	template<class T>
	friend ostream& operator<<(ostream&, Matriz<T>&);

private:
	T ** matriz;
	int n, m;

public:

	Matriz(int n, int m) {
		this->n = n;
		this->m = n;
		this->matriz = new T*[n];
		for (int i = 0; i < n; i++) {
			this->matriz[i] = new T[m];
		}
	}

	~Matriz() {
		for (int i = n - 1; i >= 0; i--) {
			delete this->matriz[i];
		}
		delete this->matriz;
	}

	int getFilas() {
		return n;
	}

	int getColumnas() {
		return m;
	}

	void set(int i, int j, T e) {
		this->matriz[i][j] = e;
	}

	T get(int i, int j) {
		return this->matriz[i][j];
	}
};

template<class T> 
ostream& operator<<(ostream & out, Matriz<T>& m) {
	for (int i = 0; i < m.n; i++) {
		for (int j = 0; j < m.m; j++) {
			out << m.matriz[i][j] << "\t";
		}
		out << endl;
	}
	return out;
}

