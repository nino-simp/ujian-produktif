#include <iostream>
using namespace std;
 int main() {
 
	float kehadiran, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	
	cout<<"kehadiran: ";
	cin>>kehadiran;
	
	cout<<"Nilai Tugas : ";
	cin>>tugas;
	
	cout<<"Nilai UTS : ";
	cin>>uts;
	
	cout<<"Nilai UAS : ";
	cin>>uas;
	
	
	nilai_akhir = (kehadiran+tugas+uts+uas)/4;

	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	
	
	
 }