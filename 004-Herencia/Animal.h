#pragma once

#include "stdafx.h"
using namespace std;

class Animal {

	friend ostream & operator<<(ostream &, Animal &);
	friend ostream & operator<<(ostream &, Animal *);

private:
	int edad;
	double peso;

public:
	Animal(int, double);
	~Animal();

	int getEdad();
	double getPeso();
};

ostream & operator<<(ostream &, Animal &);
ostream & operator<<(ostream &, Animal *);
