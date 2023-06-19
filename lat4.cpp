#include <iostream>
#include <string>
using namespace std;

char l[4]={'a','b','c','d'};
int m[4]={10,20,30,40};
int a[5]={10,20,30,40,50};
int b[5]={100,200,300,400,500};
int c[2][2]={{10,20},{30,40}};
int main(){
	cout<<"Ini Larik L \n";
	for(int i=0;i<4;i++){
		cout<<"l["<<i<<"]="<<l[i]<<endl;
	}
	cout<<"\nIni Larik M \n";
	for(int i=0;i<4;i++){
		cout<<"m["<<i<<"]="<<m[i]<<endl;
	}
	cout<<"\nIni Larik A \n";
	for(int i=0;i<5;i++){
		cout<<"a["<<i<<"]="<<m[i]<<endl;
	}
	cout<<"\nIni Larik B \n";
	for(int i=0;i<5;i++){
		cout<<"b["<<i<<"]="<<b[i]<<endl;
	}
	cout<<"\nIni Larik C \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
		cout<<"c["<<i<<"]["<<j<<"]="<<c[i][j]<<endl;
	}
	return 0;
}

