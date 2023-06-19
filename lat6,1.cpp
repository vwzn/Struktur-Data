#include <iostream>
using namespace std;

void lpp(int p, int l){
	cout<<"Panjang : "<<p<<endl;
	cout<<"Lebar : "<<l<<endl;
	cout<<"Luas : "<<p*l<<endl;
}
main(){
	int panjang = 10;
	int lebar = 5;
	lpp(panjang,lebar);
}
