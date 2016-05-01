/*
 * Loro.cpp
 *
 *  Created on: Mar 16, 2015
 *      Author: Ruben
 */

#include "stdafx.h"
#include "Loro.h"

Loro::Loro(string nombre) {
	this->nombre = nombre;
}

Loro::~Loro() {
}

void Loro::decirNombre() {
	cout << nombre << endl;
}
