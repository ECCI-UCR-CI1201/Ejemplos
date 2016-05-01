#pragma once

#include "stdafx.h"
using namespace std;

class Animal {

	friend ostream & operator<<(ostream &, Animal &);
	friend ostream & operator<<(ostream &, Animal *);

private:
	virtual void imprimir(ostream &);

protected:
	int edad;
	double peso;

public:
	Animal(int, double);
	virtual ~Animal();

	int getEdad();
	double getPeso();
	void queEs(ostream &);
	virtual void queEsPolimorfico(ostream &);
};

ostream & operator<<(ostream &, Animal &);
ostream & operator<<(ostream &, Animal *);
