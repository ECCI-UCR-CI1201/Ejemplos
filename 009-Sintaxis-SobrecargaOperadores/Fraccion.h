#pragma once

#include "stdafx.h"
using namespace std;

class Fraccion {

	friend ostream & operator<<(ostream &, Fraccion &);

private:
	int n;
	int d;

	Fraccion();
	void simplificar();

public:
	Fraccion(int, int);
	Fraccion(Fraccion &);
	~Fraccion();

	void operator=(Fraccion &);
	Fraccion operator+(Fraccion &);
	Fraccion operator-(Fraccion &);
	Fraccion operator-();
	Fraccion operator*(Fraccion &);
	Fraccion operator/(Fraccion &);

};

ostream & operator<<(ostream &, Fraccion &);
