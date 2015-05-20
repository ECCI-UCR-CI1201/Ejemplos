#pragma once

#include "Elemento.h"

using namespace std;

class ElementoInt : public Elemento {

private:
	int i;

public:
	ElementoInt(int i);
	~ElementoInt();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};
