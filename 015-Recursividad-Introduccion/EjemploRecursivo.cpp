
#include "stdafx.h"

using namespace std;

ofstream file("tmp.txt");

template<class T>
void imprimirV(T * v, int n, bool cambioLinea) {
	for (int i = 0; i < n; ++i) {
		file << v[i] << " ";
	}
	if (cambioLinea) {
		file << endl;
	}
}

// v vector, n tamano, p posicion
void combinarCaracteresRec(char * v1, int * v2, int n1, int n2, int p1,
	int p2) {
	if (p1 == n1 && p2 == n2) {
		imprimirV(v1, n1, false);
		file << "- ";
		imprimirV(v2, n2, true);
	} else {
		if (p1 < n1) {
			for (char c = 'a'; c <= 'z'; ++c) { // for (char c = '0'; c <= '1'; ++c)
				v1[p1] = c;
				combinarCaracteresRec(v1, v2, n1, n2, p1 + 1, p2);
			}
		} else {
			for (int i = 0; i <= 9; ++i) { // for (int i = 0; i <= 1; ++i)
				v2[p2] = i;
				combinarCaracteresRec(v1, v2, n1, n2, p1, p2 + 1);
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	int nC = 2;
	int nN = 2;

	char * vC = new char[nC];
	int * vN =  new int[nN];

	combinarCaracteresRec(vC, vN, nC, nN, 0, 0);

	file.close();

	system("pause");
	return 0;
}
