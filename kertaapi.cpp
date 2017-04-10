#include <iostream>
using namespace std;

typedef struct {
   string hari;
   string bulan;
   string tahun;
  } tanggal;
  
 typedef struct {
   int jam;
   int menit;
   int detik;
  } jam;
  
 typedef struct {
     int noKA;
	 string kotaAsalKA;
	 jam jamBerangkat;
	 tanggal tanggalBerangkat;
	 string kotaTujuanKA;
	 jam jamTiba;
	 tanggal TanggalTiba;
  } jadwalKA;
  
  int main () {
    jadwalKA jadwalKerataApi;
	
  jadwalKerataApi.noKA = 1;
  jadwalKerataApi.kotaAsalKA = "Jogjakarta" ; 
  jadwalKerataApi.jamBerangkat.jam = 10; 
  jadwalKerataApi.jamBerangkat.menit = 46;  
  jadwalKerataApi.jamBerangkat.detik = 37;
  jadwalKerataApi.tanggalBerangkat.hari = "senin /07";
  jadwalKerataApi.tanggalBerangkat.bulan ="january";  
  jadwalKerataApi.tanggalBerangkat.tahun= "2017";
  jadwalKerataApi.kotaTujuanKA = "Bandung";
  jadwalKerataApi.jamTiba.jam = 10; 
  jadwalKerataApi.jamTiba.menit= 46;
  jadwalKerataApi.jamTiba.detik = 50; 
  jadwalKerataApi.TanggalTiba.hari = "selasa/08";
  jadwalKerataApi.TanggalTiba.bulan = "january";
  jadwalKerataApi.TanggalTiba.tahun = "2017";
  
  
  
  cout << "no kereta : " << jadwalKerataApi.noKA << endl;
  cout << jadwalKerataApi.kotaAsalKA << endl;
  cout << jadwalKerataApi.jamBerangkat.jam << " : " << jadwalKerataApi.jamBerangkat.menit << jadwalKerataApi.jamBerangkat.detik << endl;
  cout << jadwalKerataApi.tanggalBerangkat.hari << " _ " << jadwalKerataApi.tanggalBerangkat.bulan << jadwalKerataApi.tanggalBerangkat.tahun << endl;
  cout << jadwalKerataApi.kotaTujuanKA << endl;
  
  return 0;
 } 