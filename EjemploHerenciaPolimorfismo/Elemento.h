#pragma once

#include <iostream>
using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Elemento();

public:
	virtual ~Elemento();
	virtual int compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};

ostream & operator<<(ostream &, const Elemento &);
