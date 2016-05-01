#include "stdafx.h"
#include "Perro.h"


Perro::Perro() : Animal(0, 0.0) {
	cout << "Constructor del Perro" << endl;
}


Perro::~Perro() {
	cout << "Destructor del Perro" << endl;
}

void Perro::queEsPolimorfico(ostream & out) {
	out << "Soy un perro" << endl;
}

void Perro::imprimir(ostream & out) {
	out << "Perro [Edad: " << this->edad << " Peso: " << this->peso << "]";
}

