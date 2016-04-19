#include "stdafx.h"
#include "Animal.h"


Animal::Animal(int edad, double peso) : edad(edad), peso(peso) {
}

Animal::~Animal() {
}

int Animal::getEdad() {
	return edad;
}

double Animal::getPeso() {
	return peso;
}

ostream & operator<<(ostream & out, Animal & a) {
	return out << "Animal [Edad: " << a.edad << " Peso: " << a.peso << "]" << endl;
}

ostream & operator<<(ostream & out, Animal * a) {
	return out << *a << endl;
}