
#include "stdafx.h"
#include "Loro.h"

using namespace std;

void imprimirLoro(Loro l);

int _tmain(int argc, _TCHAR* argv[]) {

	Loro l;
	l.setNombre("Ricardo");
	imprimirLoro(l);

	system("pause");
	return 0;
}

// Por Copia
void imprimirLoro(Loro l) {
	cout << "El loro se llama " << l.getNombre() << endl;
}

