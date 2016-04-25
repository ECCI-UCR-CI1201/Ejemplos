#pragma once

#include "stdafx.h"
#include "Animal.h"
using namespace std;

class Perro : public Animal {
private:
	virtual void imprimir(ostream &);

public:
	Perro();
	virtual ~Perro();

	virtual void queEsPolimorfico(ostream &);
};

