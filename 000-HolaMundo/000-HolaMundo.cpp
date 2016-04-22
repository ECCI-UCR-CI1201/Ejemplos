
#include "stdafx.h"
using namespace std;

/**
 * Punto de entrada de la aplicación.
 *
 * Basado en: https://alfps.wordpress.com/2011/12/08/unicode-part-2-utf-8-stream-mode/
 */
int _tmain(int argc, _TCHAR *argv[]) {

	if (_setmode(_fileno(stdout), _O_U8TEXT) == -1) {
		throw new runtime_error("No se puede cambiar a UTF-8");
	}

	wcout << _T("Hola Mundo!") << endl;
	wcout << _T("Caracteres en Español: áéíóúñ") << endl;

    return 0;
}
