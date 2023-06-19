#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string jurusan;
};

void InputDataMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan data mahasiswa:\n";
    cout << "Nama: ";
    cin >> mhs.nama;
    cout << "NIM: ";
    cin >> mhs.nim;
    cout << "Jurusan: ";
    cin >> mhs.jurusan;
}

void OutputDataMahasiswa(Mahasiswa mhs) {
    cout << "Data mahasiswa:\n";
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;
}

int main() {
    Mahasiswa mhs;

    InputDataMahasiswa(mhs);
    OutputDataMahasiswa(mhs);

    return 0;
}