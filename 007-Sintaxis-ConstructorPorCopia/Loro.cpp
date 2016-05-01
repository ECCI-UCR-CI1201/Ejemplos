
#include "stdafx.h"
#include "Loro.h"

Loro::Loro() {
	this->nombre = "";
}

Loro::Loro(Loro & loro) {
	cout << "Constructor por copia" << endl;
	this->nombre = loro.nombre;
}

Loro::~Loro() {
}

string Loro::getNombre() {
	return nombre;
}

void Loro::setNombre(string nombre) {
	this->nombre = nombre;
}
