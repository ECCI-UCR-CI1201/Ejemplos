#include "stdafx.h"
#include "OperadorMultiplicacion.h"


OperadorMultiplicacion::OperadorMultiplicacion()
{
}


OperadorMultiplicacion::~OperadorMultiplicacion()
{
}

Operando * OperadorMultiplicacion::operar(Operando * a, Operando * b) {
	return new Operando(a->get() * b->get());
}

