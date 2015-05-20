
#include "stdafx.h"
#include "Vector.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	srand((unsigned int) time(0));

	Vector vA, vB;

	for (int i = 1; i <= 25; ++i) {
		vA += rand() % 100; // Agregar # al final del vector
		vB += rand() % 100; // Agregar # al final del vector
	}

	cout << vA << endl;
	cout << vB << endl;

	Vector vC = vA + (vA + vB) + vB;

	cout << vC << endl;

	cout << "Fin" << endl;

	system("pause");
	return 0;
}
