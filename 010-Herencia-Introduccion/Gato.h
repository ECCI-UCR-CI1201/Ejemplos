#pragma once

#include "Animal.h"

class Gato : public Animal {
private:
	char * nombre;
	virtual void imprimir(ostream &);

public:
	Gato(int, double, char *);
	virtual ~Gato();

	char * getNombre();
	void queEs(ostream &);
	virtual void queEsPolimorfico(ostream &);
};

