//Sub-Program menggunakan Fungsi 
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void inputdata();
void Hitung();

main()	{
cout<<"Menghitung Gaji Pekerja                 |\n";
cout<<"Tunjangan Sebesar 10% dari Gaji Pokok   |\n";
cout<<"_________________________________|\n";
inputdata();
Hitung();
getch();
}
	void inputdata() {
	char nama[30],alamat[30];
	cout<<"Masukkan Nama : ";
	gets(nama);
	cout<<"Masukan Alamat: ";
	gets(alamat);
}
	void Hitung(){
	int Gajipok,tunjangan,total;
	cout<<"Masukan Gaji Pokok = ";
	cin>>Gajipok;
	tunjangan=0.1*Gajipok;
	total=Gajipok+tunjangan;
	cout<<"Total Gaji yang Diterima Adalah "<<total;
}