#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct node
{
    char nama[10];
    int umur;
    node *next; // Pointer menyambung ke node selanjutnya
} test;

node *temp, *temp2, *awal_ptr, *posisi; // pointer sementara

main()
{
    for (int n = 0; n < 3; n++)
    {
        // Isi data temp = new node; //menciptakan node baru
        temp = new (node);
        cout << "Nama : ";
        cin >> temp->nama;
        cout << "Umur : ";
        cin >> temp->umur;
        temp->next = NULL;

        // Inisialisasi pointer ketika masih kosong
        if (awal_ptr == NULL)
        {
            awal_ptr = temp;
            posisi = awal_ptr;
        }
        else
        {
            temp2 = awal_ptr; // list tidak kosong
            while (temp2->next != NULL)
            {
                temp2 = temp2->next;
                // pindah ke link berikutnya
            }
            temp2->next = temp;
        }

        cout << endl;
    }                // akhir loop
    temp = awal_ptr; // menempatkan penunjuk ke awal pointer
    cout << "\t=======================" << endl;
    cout << "\tNama	        Umur   " << endl;
    cout << "\t=======================" << endl;
    while (temp != NULL)
    {
        // Menampilkan isi
        cout << "\t" << temp->nama << "     ";
        cout << "\t" << temp->umur << "     ";
        if (temp == posisi)
            cout << " <- Posisi node";
        cout << endl;
        temp = temp->next;
    }
    cout << "\t=======================" << endl;
    cout << "\tAkhir list!" << endl;
    getch();
}