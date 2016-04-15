// EjemploLoro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Loro.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Loro ric("Ricardo");
	ric.decirNombre();

	Loro * rob = new Loro("Roberto");
	rob->decirNombre();
	delete rob;

	system("pause");
	return 0;
}

