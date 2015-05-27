
#include "stdafx.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	ElementoInt a(10);
	ElementoInt b(2);
	ElementoInt c(3);

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;

	if (a < b) {
		cout << "A es menor que B" << endl;
	} else {
		cout << "B es menor que A" << endl;
	}

	ElementoIntInt eIIA(1, 1);
	ElementoIntInt eIIB(2, 2);
	ElementoIntInt eIIC(3, 3);

	cout << "EII A: " << eIIA << endl;
	cout << "EII B: " << eIIB << endl;
	cout << "EII C: " << eIIC << endl;

	system("pause");
	return 0;
}
