/*
 * Loro.h
 *
 *  Created on: 24/03/2015
 *      Author: ruben.jimenez
 */

#ifndef LORO_H_
#define LORO_H_

#include <iostream>
using namespace std;

class Loro {

public:

	string nombre;

	Loro();
	Loro(Loro &);
	virtual ~Loro();

	string getNombre();
	void setNombre(string nombre);

};

#endif /* LORO_H_ */
