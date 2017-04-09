#include <iostream>
#include <conio.h>

using namespace std;



//prototype//
void input () ;
void pilihanJ();
void pilihanK();

//variable global//
int angka,jumlah, max, min, pilihan;

   main () {
   
         while (pilihan != 3) {
		         cout << "==================================\n";
				 cout << "MENU\n" ;
				 cout << " 1. cari nilai terkecil\n";
				 cout << " 2. cari nilai terbesar\n";
				 cout << " 3. keluar\n";
				 cout << "=================================\n";
				 cout << "pilihan Anda : " ;
				 cin >> pilihan;
				 
				 
		if (pilihan == 1) {
                pilihanJ() ;

        } else if (pilihan == 2) {
                pilihanK() ;
		}

}
}

void pilihanJ() {
        int angka, jumlah, max, min;

    cout << " 1. Mencari nilai terkecil. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "masukkan jumlah angka: " ; cin >> jumlah;
    cout << endl;

    for ( int i = 1; i <= jumlah; i++) {

    cout << "Masukan Angka        : " ; cin >> angka;
	
	if ( i == 1) {
	           jumlah;
		min = angka;
        max = angka;
        }
    else if ( min > angka ) {
       min = angka;
    }
   }

  cout << endl;
  cout << "Nilai terkecil            : " << min << endl;
       cout  << "jumlah : " << jumlah << endl;


    }

void pilihanK() {
                int angka, jumlah, max, min;
         cout << "2. Mencarai nilai terbesar. ( jumlah angka ditemukan) " << endl;
        cout << endl;
        cout << "masuakan jumlah angka : " ; cin >> jumlah;
        cout << endl;
        
        for ( int i = 1 ; i <= jumlah; i++) {

        cout << "Masukan Angka      : " ; cin >> angka;
        
        if ( i == 1) {
                             jumlah;
              min = angka;
              
              max = angka;
            }
            else if (max < angka ) {
                max = angka;
            }
           }

       cout << endl;
       cout << "Nilai terbesar            : " << max << endl;
           cout << "jumlah : " << jumlah << endl;
}		   