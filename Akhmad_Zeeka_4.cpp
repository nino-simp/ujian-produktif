#include <iostream>
#include <string>
using namespace std;
int main(){
    int p,l,t,v;
    string dimensi;

    cout<<"Masukan Panjang : "; 
    cin>>p;
    cout<<"Masukan Lebar   : ";
    cin>>l;
    cout<<"Masukan Tinggi  : ";
    cin>>t;
    cout<<endl;
    
    v=p*l*t;
    
    cout<<"Volume Balok    = "<<v<<" ";
    return 0;

}