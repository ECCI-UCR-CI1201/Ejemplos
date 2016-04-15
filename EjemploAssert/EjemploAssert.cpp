// EjemploAssert.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

#define PRINT

int _tmain(int argc, _TCHAR* argv[]) {

	srand((unsigned int)time(NULL));


#ifdef _DEBUG
	assert(rand() % 2 == 0);
#endif

#ifdef PRINT
	cout << "HOLA" << endl;
#endif

	system("pause");

	return 0;
}

