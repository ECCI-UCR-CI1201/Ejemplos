
#include "stdafx.h"
#include "Elemento.h"
#include "ElementoInt.h"

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

	system("pause");
	return 0;
}
