#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct node {
    char nama[10];
    int umur;
    node* next; // Pointer menyambung ke node selanjutnya
};

node* awal_ptr = NULL; // Pointer awal list

void sisip() {
    node* temp, * temp2;
    for (int n = 0; n < 3; n++) {
        temp = new node; // Menciptakan node baru
        cout << "Nama : ";
        cin >> temp->nama;
        cout << "Umur : ";
        cin >> temp->umur;
        temp->next = NULL;

        // Inisialisasi pointer ketika masih kosong
        if (awal_ptr == NULL) {
            awal_ptr = temp;
        }
        else {
            temp2 = awal_ptr; // list tidak kosong
            while (temp2->next != NULL) {
                temp2 = temp2->next;
                // pindah ke link berikutnya
            }
            temp2->next = temp;
        }
        cout << endl;
    }
}

void tampil() {
    node* temp = awal_ptr; // Menempatkan penunjuk ke awal pointer
    cout << "\t=======================" << endl;
    cout << "\tNama\t\tUmur   " << endl;
    cout << "\t=======================" << endl;
    while (temp != NULL) {
        // Menampilkan isi
        cout << "\t" << temp->nama << "\t\t";
        cout << "\t" << temp->umur << "\t\t";
        cout << endl;
        temp = temp->next;
    }
    cout << "\t=======================" << endl;
    cout << "\tAkhir list!" << endl;
}

int main() {
    int pilihan;
    while (true) {
        cout << "Pilihan: \n";
        cout << "1. Sisipkan data\n";
        cout << "2. Tampilkan data\n";
        cout << "3. Exit\n";
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                sisip();
                break;
            case 2:
                tampil();
                break;
            case 3:
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

        cout << endl;
    }
    getch();
    return 0;
}
