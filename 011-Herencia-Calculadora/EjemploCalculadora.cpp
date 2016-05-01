// EjemploCalculadora.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Elemento.h"
#include "Operando.h"
#include "OperadorMultiplicacion.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	stack<Elemento *> s;

	s.push(new OperadorMultiplicacion());
	s.push(new Operando(5));
	s.push(new Operando(5));


	while (s.size() > 1) {

		Operando * a = static_cast<Operando*>(s.top());
		Operando * b = static_cast<Operando*>(s.top());
		s.pop();
		s.pop();

		Operador * op = static_cast<Operador*>(s.top());
		s.pop();

		s.push(op->operar(a, b));

		delete op;
		delete b;
		delete a;
	}

	Operando * r = static_cast<Operando*>(s.top());
	s.pop();

	cout << "El resultado es " << r->get() << endl;
	
	system("pause");
	return 0;
}

