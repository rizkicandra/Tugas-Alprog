#include <iostream>
using namespace std;

int main(){
	int q[3][3];
	int q1[3][3];
	int q2[3][3];
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << "q1 : Masukkan Baris ke- " << i <<" Kolom ke- " << j << " : ";
			cin >> q1[i][j];
			cout << "q2 : Masukkan Baris ke- " << i <<" Kolom ke- " << j << " : ";
			cin >> q2[i][j];
			q[i][j] = q1[i][j] + q2[i][j];
		}
	}	
	//Menampilkan data X1
	
	cout << "q1	" << endl;
	cout << "============" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << q1[i][j] << " ";
		}
		cout << endl;
	}
	
	//Menampilkan data X2
	cout << endl << endl;
	cout << "q2	" << endl;
	cout << "============" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << q2[i][j] << " ";
		}
		cout << endl;
	}
		// Menampilkan data q
	cout << endl << endl;
	cout << "q	" << endl;
	cout << "============" << endl;

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << q[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}
