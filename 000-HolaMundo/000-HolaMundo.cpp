
#include "stdafx.h"
using namespace std;

#if defined(UNICODE)
	#define _tcout std::wcout
#else
	#define _tcout std::cout
#endif

/**
 * Punto de entrada de la aplicación.
 */
int _tmain(int argc, _TCHAR *argv[]) {

	UINT oldcp = GetConsoleOutputCP();
	SetConsoleOutputCP(CP_UTF8);

	printf("Hola Mundo!óí\n");
	printf(u8"Hola Mundo!óí\n");
	wprintf(L"Hola Mundo!óí\n");
	wprintf(_T("Hola Mundo!óí\n"));

	cout << "Hola Mundo!óí" << endl;
	wcout << "Hola Mundo!óí" << endl; 

	cout << u8"Hola Mundo!óí" << endl;
	wcout << u8"Hola Mundo!óí" << endl;

	cout << L"Hola Mundo!óí" << endl;
	wcout << L"Hola Mundo!óí" << endl;

	cout << _T("Hola Mundo!óí") << endl;
	wcout << _T("Hola Mundo!óí") << endl;

	system("pause");

	SetConsoleOutputCP(oldcp);
    return 0;
}
