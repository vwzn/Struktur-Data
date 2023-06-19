#include <iostream>
// Mengimpor pustaka iostream untuk memungkinkan input/output

#define MAX_SIZE 10 // Mendefinisikan nilai konstan untuk ukuran maksimum antrian

using namespace std;
// Menggunakan namespace std untuk menghindari mengetik std:: di setiap kali menggunakan fungsi standar C++

class Queue
    // Membuat kelas Queue untuk merepresentasikan struktur data antrian
{
private:
    // Semua anggota kelas yang dideklarasikan sebagai private hanya dapat diakses dari dalam kelas.
    // Anggota kelas yang dideklarasikan sebagai private digunakan untuk menyembunyikan detail implementasi dari pengguna kelas.
    // Fungsi main() dalam program C++ tidak dapat mengakses anggota kelas yang dideklarasikan sebagai private.
    
    int antrian[MAX_SIZE]; // Mendeklarasikan array antrian dengan ukuran maksimum MAX_SIZE
    int head;              // Mendeklarasikan variabel head untuk menunjukkan indeks elemen pertama dalam antrian
    int tail;              // Mendeklarasikan variabel tail untuk menunjukkan indeks elemen terakhir dalam antrian

public:
    // Semua anggota kelas yang dideklarasikan sebagai public dapat diakses dari mana saja baik itu di dalam maupun di luar kelas.
    // Anggota kelas yang dideklarasikan sebagai public digunakan untuk memberikan akses kepada pengguna kelas.
    // Fungsi main() dalam program C++ hanya bisa mengakses anggota kelas yang dideklarasikan sebagai public.

    Queue()
    // "queue()" pada baris tersebut adalah nama dari fungsi yang didefinisikan
    {
        head = -1; // Menetapkan nilai awal -1 ke head untuk menandakan bahwa antrian kosong
        tail = -1; // Menetapkan nilai awal -1 ke tail untuk menandakan bahwa antrian kosong
    }

    bool isFull()
    {
        // Membuat fungsi untuk memeriksa apakah antrian penuh atau tidak
        if (tail == MAX_SIZE - 1)
        {                // Jika indeks tail sama dengan ukuran maksimum dikurangi 1, maka antrian penuh
            return true; // Mengembalikan nilai true jika antrian penuh
        }
        return false; // Mengembalikan nilai false jika antrian tidak penuh
    }

    bool isEmpty()
    {
        // Membuat fungsi untuk memeriksa apakah antrian kosong atau tidak
        if (head == -1 && tail == -1)
        {                // Jika nilai head dan tail sama dengan -1, maka antrian kosong
            return true; // Mengembalikan nilai true jika antrian kosong
        }
        return false; // Mengembalikan nilai false jika antrian tidak kosong
    }

    void enqueue(int x)
    {
        
        // Membuat fungsi untuk menambahkan elemen ke antrian
        if (isFull())
        {                                     // Jika antrian penuh, maka tidak bisa menambahkan elemen lagi
            cout << "Antrian penuh!" << endl; // Mencetak pesan "Antrian penuh!" ke konsol
        }
        else if (isEmpty())
        {                      // Jika antrian kosong, maka menambahkan elemen pertama
            head = tail = 0;   // Mengatur head dan tail ke indeks 0 untuk menandakan elemen pertama
            antrian[tail] = x; // Menambahkan elemen x ke antrian pada indeks tail
        }
        else
        {                      // Jika antrian tidak kosong dan tidak penuh, maka menambahkan elemen baru ke tail
            tail++;            // Menambahkan nilai tail dengan 1 untuk menunjukkan indeks elemen terakhir
            antrian[tail] = x; // Menambahkan elemen x ke antrian pada indeks tail
        }
    }

    void dequeue()
    {
        // Membuat fungsi untuk menghapus elemen dari antrian
        if (isEmpty())
        { // Jika antrian kosong,
            cout << "Antrian kosong!" << endl;
        }
        else if (head == tail)
        {
            head = tail = -1;
        }
        else
        {
            head++;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Antrian kosong!" << endl;
        }
        else
        {
            cout << "Isi antrian: ";
            for (int i = head; i <= tail; i++)
            {
                cout << antrian[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    int pilihan, x;
    do
    {
        cout << "Menu:" << endl;                        // menampilkan menu
        cout << "1. Tambah elemen ke antrian" << endl;  // menampilkan opsi untuk menambahkan elemen ke antrian
        cout << "2. Hapus elemen dari antrian" << endl; // menampilkan opsi untuk menghapus elemen dari antrian
        cout << "3. Tampilkan isi antrian" << endl;     // menampilkan opsi untuk menampilkan isi dari antrian
        cout << "4. Keluar" << endl;                    // menampilkan opsi untuk keluar dari program
        cout << "Masukkan pilihan Anda: ";              // meminta pengguna untuk memasukkan pilihan
        cin >> pilihan;                                 // membaca pilihan pengguna
        switch (pilihan)
        { // memulai pemrosesan pilihan pengguna menggunakan switch
        case 1:
            cout << "Masukkan elemen yang ingin ditambahkan: "; // meminta pengguna untuk memasukkan elemen yang ingin ditambahkan ke antrian
            cin >> x;                                           // membaca elemen yang ingin ditambahkan
            q.enqueue(x);                                       // memanggil metode enqueue untuk menambahkan elemen ke antrian
            break;
        case 2:
            q.dequeue(); // memanggil metode dequeue untuk menghapus elemen dari antrian
            break;
        case 3:
            q.display(); // memanggil metode display untuk menampilkan isi dari antrian
            break;
        case 4:
            cout << "Terima kasih!" << endl; // menampilkan pesan terima kasih karena program telah selesai dijalankan
            break;
        default:
            cout << "Pilihan tidak valid!" << endl; // menampilkan pesan kesalahan jika pengguna memasukkan pilihan yang tidak valid
        }
    } while (pilihan != 4); // melakukan pengulangan selama pengguna belum memilih opsi keluar
    return 0;               // mengembalikan nilai 0 sebagai tanda program telah selesai dijalankan dengan benar
}