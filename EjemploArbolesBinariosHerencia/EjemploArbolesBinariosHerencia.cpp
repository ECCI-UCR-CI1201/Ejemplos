
#include "stdafx.h"
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int) time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}

	cout << a << endl;

	system("pause");
	return 0;
}

