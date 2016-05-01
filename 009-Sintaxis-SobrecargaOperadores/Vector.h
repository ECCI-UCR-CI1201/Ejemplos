
#pragma once

using namespace std;

class Vector {

	friend ostream & operator<<(ostream &, Vector);

public:

	const int INITIAL_SIZE = 10;
	Vector();
	Vector(Vector &);
	virtual ~Vector();
	void operator=(Vector &);
	void operator+=(int);
	Vector operator+(const Vector&);

private:
	int * vector; // almacena el vector
	int size; // tamaño real vector
	int capacity; // capacidad maxima del vector

	void init(int, int);
	void fillWithZeroes();
	void doubleSize(); // Duplicar el tamaño del vector y copiar valores
};

ostream & operator<<(ostream &, Vector);
