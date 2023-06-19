#include <iostream>
#include <conio.h>
using namespace std;

struct STACK // DEKLARASI TUMPUKAN
{
    int data[5];
    int atas;
};


STACK tumpuk;

int main()
{
    int baru, i;
    tumpuk.atas = -1;
    cout << "Data angka yang akan di-push = ";
    cin >> baru;
    tumpuk.atas++;
    tumpuk.data[tumpuk.atas] = baru;
    cout << "\nData pada stack saat ini adalah : \n";
    cout << "Nilai ruang ke " << i << " : " << tumpuk.data[i] << endl;
    getch();
}



// menggunakan nama alias
// #include<iostream>
// #include<conio.h>
// using namespace std;

// typedef struct STACK     // MENGGUNAKAN TYPEDEF
// {
//   int data[5];
//   int atas;
// } st;

// st tumpuk;

// int main ()
// {
//   int baru,i;
//   tumpuk.atas=-1;
//   cout<<"Data angka yang akan di-push = ";cin>>baru;
//   tumpuk.atas++;
//   tumpuk.data[tumpuk.atas]=baru;
//   cout<<"\nData pada stack saat ini adalah : \n";
//   cout<<"Nilai ruang ke "<<i<<" : "<<tumpuk.data[i]<<endl;
//   getch();
// }
