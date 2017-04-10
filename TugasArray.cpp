#include <iostream>
using namespace std;

int main () {
	char nilai [10];
	int i, hasil=0 ;
	
for (int i=0; i< 10; i++) {
cout << "Masukkan Character Anda : ";
cin >> nilai[i];
	
	if (nilai[i] == 'a' || nilai[i] == 'A'){
		hasil++;
	}
	}
	cout << "Hasil Elemen Array : ";
		for (int i=0; i< 10; i++) {
		cout << nilai [i];
		}
		cout << endl << "Jumlah Character A : " << hasil;
	}