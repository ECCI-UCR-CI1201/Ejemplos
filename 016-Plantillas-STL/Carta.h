
#pragma once

#include "stdafx.h"
using namespace std;

class Carta {

	friend ostream & operator<<(ostream &, Carta &);

private:
	char numero;
	int valor;
	char palo;

public:
	Carta(char, int, char);
	~Carta();

	int getValor() const;
	char getPalo() const;
	bool operator<(Carta &);
};

ostream & operator<<(ostream &, Carta &);
