#pragma once

#include "Operando.h"

class OperadorSuma
{
public:
	OperadorSuma();
	~OperadorSuma();

	Operando * operar(Operando *, Operando *);

};

