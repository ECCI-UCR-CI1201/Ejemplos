#pragma once

#include "Operando.h"

class Operador : public Elemento
{
public:
	Operador();
	~Operador();

	virtual Operando * operar(Operando *, Operando *) = 0;
};

