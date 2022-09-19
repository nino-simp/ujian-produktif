#include <iostream>
using namespace std;
int main (){
	int nilai;
	cout << "Nilai Kamu = "<<endl;
	cin >> nilai;
	if (nilai > 92){
		cout << "A" <<endl;
	}else if (nilai > 86){
		cout << "B" <<endl;
		}else if (nilai > 80){
		cout << "AB" <<endl;
	}else if (nilai > 70){
		cout << "C" <<endl;
	}else if (nilai < 70){
		cout << "D";
	}
   return 0;
}
 



