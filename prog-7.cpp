#include"unit1.h"

int main() {
	// Variabel lokal
	int pj, lb, jari;
	int luasP;
	float luasL;
	
	// Program luas persegi
	printf("Menghitung Luas Persegi\n");
	printf("Masukkan Panjang : ");
	scanf("%i", &pj);
	printf("Masukkan Lebar : ");
	scanf("%i", &lb);
	luasPersegi(pj, lb, luasP);
	printf("Luas Persegi : %i", luasP);
	
	// Program Luas lingkaran
	printf("Menghitung Luas Lingkaran\n");
	printf("Masukkan Jari-jari Lingkaran : ");
	scanf("%i", &jari);
	luasL = luasLingkaran(jari);
	printf("Luas Lingkaran : %f", luasL);
	getch();
}
