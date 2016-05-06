// 017-Archivos-Introduccion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main() {

	ifstream lectura("Input.txt.");

	char tmp[1024];
	while(lectura) {
		lectura.getline(tmp, 1024);
		cout << tmp << endl;
	}
	
	lectura.close();

	ofstream escritura("Output.txt");
	escritura << "Hola Mundo" << endl;
	escritura << "Hola Mundo!" << endl;
	escritura.close();

    return 0;
}

