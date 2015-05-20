
#include "stdafx.h"
#include "Matematico.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	Matematico m;

	cout << "Por copia" << endl;
	{
		int a = 5, b = 5;
		cout << "A original: " << a << " B original: " << b << endl;
		cout << "Resultado del metodo de sumar: " << m.sumarCopia(a, b) << endl;
		cout << "A modificado: " << a << " B modificado: " << b << endl;
	}
	cout << endl;

	cout << "Por puntero" << endl;
	{
		int * a = new int, *b = new int;
		*a = 5;
		*b = 5;
		cout << "A original: " << *a << " B original: " << *b << endl;
		cout << "Direccion A original: " << a << " Direccion B original: " << b << endl;
		cout << "Resultado del metodo de sumar: " << m.sumarPuntero(a, b) << endl;
		cout << "A modificado: " << *a << " B modificado: " << *b << endl;
		cout << "Direccion A modificado: " << a << " Direccion B modificado: " << b << endl;
		delete a;
		delete b;
	}
	cout << endl;

	cout << "Por referencia" << endl;
	{
		int a = 5, b = 5;
		cout << "A original: " << a << " B original: " << b << endl;
		cout << "Resultado del metodo de sumar: " << m.sumarReferencia(a, b) << endl;
		cout << "A modificado: " << a << " B modificado: " << b << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
