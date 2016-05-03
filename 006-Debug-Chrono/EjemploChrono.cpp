
#include "stdafx.h"
using namespace std;
using std::chrono::nanoseconds;
using std::chrono::duration_cast;

int _tmain(int argc, _TCHAR* argv[]) {

	// Se obtiene el tick de inicio
	auto inicio = std::chrono::high_resolution_clock::now();

	// =-= Inicio código a medir =-=
	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 1000; j++) {
			int a = i * j;
		}
	}
	// =-= Fin código a medir =-=

	// Se obtiene el tick de final
	auto fin = std::chrono::high_resolution_clock::now();

	// Se convierte a nanosegundos y se imprime
	nanoseconds ns = duration_cast<nanoseconds>(fin - inicio);
	cout << "La duracion es " << ns.count() << " ns" << endl;

	system("pause");
	return 0;
}

