
#include "stdafx.h"
#include "Fraccion.h"


using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	Fraccion f1(1, 2);
	Fraccion f2(2, 3);

	cout << "F1 = " << f1 << endl;
	cout << "F2 = " << f2 << endl;

	cout << "F1 + F2 = " << f1 << " + " << f2 << " = " << f1 + f2 << endl;
	cout << "F1 - F2 = " << f1 << " - " << f2 << " = " << f1 - f2 << endl;
	cout << "F1 * F2 = " << f1 << " * " << f2 << " = " << f1 * f2 << endl;
	cout << "F1 / F2 = " << f1 << " / " << f2 << " = " << f1 / f2 << endl;

	system("pause");
	return 0;
}
