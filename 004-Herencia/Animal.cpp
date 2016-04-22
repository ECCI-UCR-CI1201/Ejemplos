#include "stdafx.h"
#include "Animal.h"


Animal::Animal(int edad, double peso) : edad(edad), peso(peso) {
	cout << "Constructor del Animal" << endl;
}

Animal::~Animal() {
	cout << "Destructor de Animal" << endl;
}

int Animal::getEdad() {
	return edad;
}

double Animal::getPeso() {
	return peso;
}

void Animal::queEs(ostream & out){
	out << "Soy un animal" << endl;
}

void Animal::queEsPolimorfico(ostream & out) {
	out << "Soy un animal" << endl;
}

void Animal::imprimir(ostream & out) {
	out << "Animal [Edad: " << this->edad << " Peso: " << this->peso << "]";
}

ostream & operator<<(ostream & out, Animal & a) {
	a.imprimir(out);
	return out;
}

ostream & operator<<(ostream & out, Animal * a) {
	a->imprimir(out);
	return out;
}