#include "stdafx.h"
#include "Gato.h"


Gato::Gato(int edad, double peso, char * nombre) : Animal(edad, peso), nombre(nombre) {
	cout << "Constructor del Gato" << endl;
}


Gato::~Gato() {
	cout << "Destructor del Gato" << endl;
}

char * Gato::getNombre() {
	return nombre;
}

void Gato::queEs(ostream & out) {
	out << "Soy un gato llamado " << nombre << endl;
}

void Gato::queEsPolimorfico(ostream & out) {
	out << "Soy un gato llamado " << nombre << endl;
}

void Gato::imprimir(ostream & out) {
	out << "Gato [Edad: " << this->edad << " Peso: " << this->peso << " Nombre: " << this->nombre << "]";
}

