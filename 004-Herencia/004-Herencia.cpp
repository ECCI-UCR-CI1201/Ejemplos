// 004-Herencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gato.h"
#include "Animal.h"

using namespace std;

int main(){ 

	Animal * a = new Animal(5, 100.0);

	Gato * g = new Gato();

	Animal * b = g;

	cout << a << endl;
	cout << g << endl;

	delete a;


	Animal * v[2] = {a, g};

	system("pause");
    return 0;
}

