#include<stdio.h>
#include<conio.h>

#define Phi 3.14

void luasPersegi (int p, int l, int& luas) {
	luas = p * l;
	return 0;
}

float luasLingkaran (int r) {
	float ls;
	ls = Phi * r * r;
	return ls;
}
