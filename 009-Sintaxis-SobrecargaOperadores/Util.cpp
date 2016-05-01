#include "stdafx.h"
#include "Util.h"

int Util::mcd(int a, int b) {
	int r = 0;
	if (a == 0) {
		r = b;
	}
	else {
		r = mcd(max(a, b) - min(a, b), min(a, b));
	}
	return r;
}

int Util::max(int a, int b) {
	return a > b ? a : b;
}

int Util::min(int a, int b) {
	return a < b ? a : b;
}

int Util::abs(int n) {
	return n >= 0 ? n : -n;
}