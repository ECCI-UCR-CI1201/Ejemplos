#include "stdafx.h"
#include "Fraccion.h"
#include "Util.h"

Fraccion::Fraccion() : n(0), d(0) {
#ifdef _DEBUG
	cout << "Llamado al constructor por defecto" << endl;
#endif
}

Fraccion::Fraccion(int n, int d) : n(n), d(d) {
#ifdef _DEBUG
	cout << "Llamado al constructor con parametros" << endl;
#endif
}

Fraccion::Fraccion(Fraccion & otra) : n(otra.n), d(otra.d) {
#ifdef _DEBUG
	cout << "Llamado al constructor por copia" << endl;
#endif

	// Es equivalente a 
	// this->n = otra.n;
	// this->d = otra.d;

	// También es equivalente a 
	// *this = otra;
	// Requiere que operator= esté implementado

}

Fraccion::~Fraccion() {
#ifdef _DEBUG
	cout << "Llamado al destructor" << endl;
#endif
}

void Fraccion::operator=(Fraccion & otra) {
	this->n = otra.n;
	this->d = otra.d;
}

Fraccion Fraccion::operator+(Fraccion & otra) {
	Fraccion resultado;
	if (this->d == otra.d) {
		resultado.n = this->n + otra.n;
		resultado.d = this->d;
	}
	else {
		resultado.n = this->n * otra.d + otra.n * this->d;
		resultado.d = this->d * otra.d;
	}
	resultado.simplificar();
	return resultado;
}
Fraccion Fraccion::operator-(Fraccion & otra) {
	return *this + -otra;
}

Fraccion Fraccion::operator-() {
	return Fraccion(-this->n, this->d);
}

Fraccion Fraccion::operator*(Fraccion & otra) {
	Fraccion resultado;
	resultado.n = this->n * otra.n;
	resultado.d = this->d * otra.d;
	resultado.simplificar();
	return resultado;
}

Fraccion Fraccion::operator/(Fraccion & otra) {
	Fraccion resultado;
	resultado.n = this->n * otra.d;
	resultado.d = this->d * otra.n;
	resultado.simplificar();
	return resultado;
}

void Fraccion::simplificar() {
	int divisor = Util::mcd(Util::abs(this->n), Util::abs(this->d));
	this->n /= divisor;
	this->d /= divisor;
}

ostream & operator<<(ostream & out, Fraccion & otra) {
	return out << otra.n << "/" << otra.d;
}
