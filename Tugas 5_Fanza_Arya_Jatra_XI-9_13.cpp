#include <cstdlib>
#include <iostream>
using namespace std;

int permutasi (int x, int y) {
	int Nilai_Permut, selisih;
	int faktorial = 1;
	selisih = x - y;
	
	while (x > 0) {
	faktorial = faktorial * x;
	x = x-1;
	}
	  Nilai_Permut = faktorial/selisih;
	  return(Nilai_Permut);
}

int main () {
	int n, r;
	cout << "Masukkan nilai n: ";
	cin >> n;
	while (n < 0) {
	cout << "Masukkan Nilai N kembali: ";
	cin >> n;
	}
	cout << "Masukkan Nilai r: ";
	cin >> r;
	while (r < 0) {
	cout << "Masukkan Nilai r Kembali: ";
	cin >> r;
	}
	
  cout << "Nilai Pemutasi " << r << " dari " << n << "adalah " << permutasi(n, r) << endl;
  
  system(0);
  return(0);
}
