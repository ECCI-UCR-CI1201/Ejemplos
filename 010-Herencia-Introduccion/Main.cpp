// 004-Herencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gato.h"
#include "Perro.h"
#include "Animal.h"

using namespace std;

void herenciaSimple();
void herenciaSimplePolimorfica();
void sobrecargaOperadorPolimorfica();

int main(){ 

	cout << "HERENCIA SIMPLE" << endl;
	herenciaSimple();
	cout << endl;

	cout << "HERENCIA SIMPLE Y POLIMORFICA" << endl;
	herenciaSimplePolimorfica();
	cout << endl;

	cout << "SOBRECARGA OPERADOR POLIMORFICA" << endl;
	sobrecargaOperadorPolimorfica();
	cout << endl;

    return 0;
}

void herenciaSimple() {
	Animal * animal = new Animal(5, 5.0);
	Gato * gato = new Gato(5, 5.0, "Max");
	Animal * gatoAnimal = new Gato(6, 4.0, "Roberto");

	cout << animal << endl;
	cout << gato << endl;

	animal->queEs(cout);
	gato->queEs(cout);
	gatoAnimal->queEs(cout); // Responde como animal y no como gato

	// Vector de punteros a animales
	Animal * perroAnimal = new Perro();
	Animal * vectorAnimales[] = {gatoAnimal, perroAnimal, animal};
	
	// Se intenta hacer un downcast
	for (int i = 0; i < 3; ++i) {
		
		Gato * gatoGato = dynamic_cast<Gato *>(vectorAnimales[i]);
		Perro * perroPerro = dynamic_cast<Perro *>(vectorAnimales[i]);
		
		if (gatoGato != NULL) {
			cout << "Se pudo convertir en un gato" << endl;
		}
		else if(perroPerro != NULL) {
			cout << "Se pudo convertir en un perro" << endl;
		}
		else {
			cout << "No se pudo convertir en nada" << endl;
		}
	}

	delete perroAnimal;
	delete gatoAnimal;
	delete animal;
	delete gato;
}

void herenciaSimplePolimorfica() {

	Animal * animal = new Animal(5, 5.0);
	Animal * gato = new Gato(6, 4.0, "Maria");

	animal->queEsPolimorfico(cout);
	gato->queEsPolimorfico(cout);

	delete gato;
	delete animal;

}

void sobrecargaOperadorPolimorfica() {

	Animal * vector[] = { new Gato(5, 5.0, "Max"), new Perro(), new Animal(2, 2.0)};

	for (int i = 0; i < 3; ++i) {
		cout << vector[i] << endl;
	}

	for (int i = 0; i < 3; ++i) {
		delete vector[i];
	}
}



