
#include "stdafx.h"
#include "Vector.h"

Vector::Vector() {
	init(0, INITIAL_SIZE);
}

void Vector::init(int size, int capacity) {
	this->size = size;
	this->capacity = capacity;
	this->vector = new int[capacity];
	fillWithZeroes();
}

Vector::~Vector() {
	fillWithZeroes();
	vector = 0;
	delete vector;
}

void Vector::operator+=(int nuevo) {
	if (size == capacity) {
		doubleSize();
	}
	vector[size++] = nuevo;
}

Vector Vector::operator+(const Vector & otro) {
	Vector nuevo;
	if (this->size >= otro.size) {
		nuevo.init(this->size, this->capacity);
	} else {
		nuevo.init(otro.size, otro.capacity);
	}
	int i = 0, j = 0, k = 0;
	while (i < this->size && j < otro.size) {
		nuevo.vector[k++] = this->vector[i++] + otro.vector[j++];
	}
	while (i < this->size) {
		nuevo.vector[k++] = this->vector[i++];
	}
	while (j < otro.size) {
		nuevo.vector[k++] = otro.vector[j++];
	}
	return nuevo;
}

void Vector::doubleSize() {
	capacity *= 2;
	int * vectorN = new int[capacity];
	for (int i = 0; i < size; ++i) {
		vectorN[i] = vector[i];
	}
	fillWithZeroes();
	delete vector;
	vector = vectorN;
}

void Vector::fillWithZeroes() {
	for (int i = 0; i < size; ++i) {
		vector[i] = 0;
	}
}

ostream & operator<<(ostream & out, const Vector & v) {
	out << "Vector[";
	for (int i = 0; i < v.size; ++i) {
		out << v.vector[i];
		if (i + 1 < v.size) {
			out << " ";
		}
	}
	out << "]";
	return out;
}

