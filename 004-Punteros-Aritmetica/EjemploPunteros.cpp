
#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	int * v = new int;

	*v = 5;

	cout << "Direccion de memoria v " << v << endl;
	cout << "A lo que apunta v " << *v << endl;

	int ** p = &v;

	cout << "Direccion de memoria p " << p << endl;
	cout << "Direccion de memoria v " << *p << endl;
	cout << "A lo que apunta v " << **p << endl;

	**p = 7;
	cout << "A lo que apunta v " << *v << endl;

	delete v;

	int x = -5;
	char * c = (char *) &x;

	for (int i = 0; i < sizeof(x); ++i) {
		cout << i << " " << (int) c[i] << endl;
	}

	system("pause");
	return 0;
}
