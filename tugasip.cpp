#include <iostream>
using namespace std;

bool iswithinrange (float ip, int max, int main);
void cetak ();


float ip, rataip;
int jmlmhs, mhsllus, mhstdkllus;
bool valid;

int main () {
        do {
		     cout <<"masukan nilai : " ;
			 cin >> ip ;
			 valid = iswithinrange (ip,4,0) ;
		if (valid) {
                if (ip >=2.75) {
        		mhsllus++;
		}else{
		        mhstdkllus++;
		}
		rataip = rataip + ip;
		jmlmhs++;
		}else{ 
		       cout <<"===================================" << endl;
			   cout <<"tidak ada data" <<endl;
		}
}
while (ip !=-999);
cetak();
}
bool iswithinrange (float ip, int max, int main) {
       if (ip > max || ip <=0) {
              return false;
        }
        return false;
}
void cetak () {
         cout << "========================================" <<endl;
		 cout << "banyak mahasiswa : " << jmlmhs << endl;
		 cout << "banyak jumlah lulus : "<<mhsllus << endl;
		 cout << "banyak yang tidak lulus : "<<mhstdkllus << endl;
		 cout << "rata-rata nilai ip : " << (rataip/jmlmhs) << endl;
}