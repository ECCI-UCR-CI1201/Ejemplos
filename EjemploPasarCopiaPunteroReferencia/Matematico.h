#pragma once

using namespace std;

class Matematico {

public:
	Matematico();
	virtual ~Matematico();

	int sumarCopia(int, int); // Copia
	int sumarPuntero(int *, int *); // Puntero
	int sumarReferencia(int&, int&); // Referencia

};
