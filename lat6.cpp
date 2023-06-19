#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

typedef struct mahasiswa
{
	string nama;
	string prodi;
	short int usia;
} mh[2];

mh mhs;

void inputmhs(mh &mhs)
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Nama Mahasiswa : ";
		cin >> mhs[i].nama;
		cout << "Program Studi  : ";
		cin >> mhs[i].prodi;
		cout << "Usia           : ";
		cin >> mhs[i].usia;
	}
}

void outputmhs(mh mhs)
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Nama Mahasiswa : " << mhs[i].nama << endl;
		cout << "Program Studi  : " << mhs[i].prodi << endl;
		cout << "Usia           : " << mhs[i].usia << endl;
	}
}

int main()
{
	inputmhs(mhs);
	outputmhs(mhs);
	return 0;
}

// Parameter //
// variable public : berubah ubah  <> Static : tetap
// varibale global : bisa dipakai dimana saja <> Local : tidak bisa dipakai dimana saja
// Parameter Formal yang disisipkan di parameter prosedur
// Parameter Aktual yang di tuliskan di col prosedur
// Syarat Parameter ada 3
// nama parameter boleh beda
// tipe data parameter harus sama
// urutan harus sama
// Tugas//
// buat struktur rekaman dari kartu mahasiswa masing masing di input dan output daya nya menggunakan prosedur, prosedur nya menggunakan parameter di tulistangan dan tugas perorangan