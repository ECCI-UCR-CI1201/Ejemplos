
#include "stdafx.h" // Archivos de encabezado precompilados

using namespace std; // Namespace donde se define cout por ejemplo

/**
 * Punto de entrada de la aplicación.
 * El programa ejecuta lo 
 *
 * Basado en: https://alfps.wordpress.com/2011/12/08/unicode-part-2-utf-8-stream-mode/
 */
int _tmain() {

	// Recordar que para imprimir caracteres UNICODE se necesita lo siguiente:
	// - Todos los archivos de código fuente deben estar en UTF-8 BOM
	// - El proyecto de Visual Studio debe estar configurado con la opción: "Use Unicode Character Set"
	// - Se debe cambiar el modo de la consola a UTF-8

	// NOTA: Estos pasos deben realizarse en Windows para poder imprimir en UTF-8
	// En Linux es más sencillo.
	
	// Esta instrucción cambia el modo de la consola a UTF-8
	if (_setmode(_fileno(stdout), _O_U8TEXT) == -1) {

		// Si hay algún error cambiando el modo, el método devuelve -1
		// y es necesario terminar la aplicación con un error.
		throw new runtime_error("No se puede cambiar a UTF-8");

		// NOTA: Leer más del método _setmode en https://msdn.microsoft.com/en-us/library/tw4k6df8.aspx
	}

	// Se imprime el mensaje de Hola Mundo
	wcout << _T("Hola Mundo!") << endl;

	// Se imprimen caracteres en Español
	wcout << _T("Caracteres en Español: áéíóúñ") << endl;

	// Se imprimen caracteres en Japonés
	// TODO Reparar este mensaje. En la consola no se ve como debería.
	wcout << _T("Caracteres en Japonés: か き く け こ") << endl;

	// Se termina la aplicación
    return 0;
}
