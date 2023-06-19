#include <iostream>
#include <string>
using namespace std;

char l[4];
int main(){
	l[0]= 'a';
	l[1]= 'b';
	l[2]= 'c';
	l[3]= 'd';
	
	cout<<"l["<<0<<"]="<<l[0];
	cout<<"l["<<1<<"]="<<l[1];
	cout<<"l["<<2<<"]="<<l[2];
	cout<<"l["<<3<<"]="<<l[3];
	
	return 0;
}

