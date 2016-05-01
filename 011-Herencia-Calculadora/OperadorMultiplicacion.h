#pragma once

#include "Operador.h"

class OperadorMultiplicacion : public Operador
{
public:
	OperadorMultiplicacion();
	~OperadorMultiplicacion();

	Operando * operar(Operando *, Operando *);
};

