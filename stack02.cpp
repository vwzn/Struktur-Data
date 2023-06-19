#include <iostream>
#include <stdlib.h> // menggunakan system("cls")
#include <conio.h>  // menggunakan getch()
#define MAX 10      // batas stack yang ingin dibuat, boleh lebih
using namespace std;

int top = -1, Stack[MAX];
// Baris ini adalah deklarasi variabel global pada program. Pernyataan ini mendefinisikan dua variabel:

// top, yang bertipe data integer dan diinisialisasi dengan nilai -1.
// Stack, yang merupakan array bertipe data integer dengan ukuran maksimal sebesar nilai konstanta MAX yang didefinisikan dengan #define.
// Dalam konteks program di atas, variabel top digunakan untuk melacak indeks elemen teratas pada stack, sedangkan variabel Stack digunakan untuk menyimpan elemen-elemen pada stack.

// Secara keseluruhan, baris ini mendefinisikan sebuah stack yang berbasis array dengan ukuran maksimal sebesar MAX dan variabel top yang digunakan untuk melacak elemen teratas pada stack.

void push() // modul prosedure
// Pernyataan "void push()" merupakan sebuah deklarasi fungsi pada program.
// Fungsi ini bertipe void, artinya tidak mengembalikan nilai apapun.
// deklarasi "void push()" dapat dibaca sebagai "membuat sebuah fungsi push() yang tidak mengembalikan nilai apapun".
{
    if (top == MAX - 1)
    // Secara umum, pernyataan "if (top == MAX-1)" dapat dibaca sebagai "jika nilai variabel top sama dengan nilai maksimum indeks pada stack dikurangi satu, lakukan tindakan tertentu".
    {
        cout << ">> Stack sudah Penuh !" << endl;
        // digunakan untuk menampilkan pesan error pada layar ketika stack sudah penuh dan tidak dapat menambahkan elemen baru lagi.
        // dapat dibaca sebagai "tampilkan pesan error '>> Stack sudah Penuh !' pada layar".
    }
    else
    {
        top++;
        // Dalam hal ini, pernyataan "top++;" digunakan untuk menambahkan nilai variabel top dengan 1 setelah operasi push() berhasil dilakukan.
        // Pernyataan tersebut dapat dibaca sebagai "tambahkan nilai variabel top dengan 1".

        cout << ">> Masukan Data : ";
        // digunakan untuk menampilkan pesan ke layar untuk meminta pengguna memasukkan data yang ingin ditambahkan ke dalam stack.
        //  dapat dibaca sebagai "tampilkan pesan '>> Masukan Data : ' pada layar untuk meminta pengguna memasukkan nilai data".

        cin >> Stack[top];
        //  digunakan untuk menerima input nilai data yang akan ditambahkan ke dalam stack dari pengguna.
        // dapat dibaca sebagai "terima input nilai data dari pengguna dan simpan nilai tersebut pada variabel Stack pada indeks top".

        // cout <<"n\Pada Index ke "<<top<<" n\";

        cout << "Data [" << Stack[top] << "] Telah Ditambah ! " << endl;
        // digunakan untuk menampilkan pesan ke layar setelah pengguna menambahkan nilai data ke dalam stack melalui operasi push().
        // dapat dibaca sebagai "tampilkan pesan 'Data [nilai data] Telah Ditambah !' pada layar untuk memberitahu pengguna bahwa nilai data berhasil ditambahkan ke dalam stack".
    }
}

void pop() // modul prosedure
// Pernyataan "void pop()" merupakan sebuah deklarasi fungsi pada program.
// Fungsi ini bertipe void, artinya tidak mengembalikan nilai apapun.
// deklarasi "void pop()" dapat dibaca sebagai "membuat sebuah fungsi pop() yang tidak mengembalikan nilai apapun".
{
    if (top == -1)
    // Secara umum, pernyataan "if (top == -1)" dapat dibaca sebagai "jika nilai variabel top sama dengan -1, lakukan tindakan tertentu".
    {
        cout << ">> Stack Kosong !" << endl;
        // digunakan untuk menampilkan pesan ke layar ketika pengguna mencoba mengambil elemen dari stack yang kosong melalui operasi pop().
        // dapat dibaca sebagai "tampilkan pesan '>> Stack Kosong !' pada layar untuk memberitahu pengguna bahwa stack tidak memiliki elemen yang dapat diambil".
    }
    else
    {
        cout << "n\Data [" << Stack[top] << "] pada index ke '" << top << "' dalam Stack Diambil !" << endl;
        // digunakan untuk menampilkan pesan ke layar setelah pengguna mengambil nilai data dari stack melalui operasi pop().
        // dapat dibaca sebagai "tampilkan pesan 'Data [nilai data] pada index ke [nomor index] dalam Stack Diambil !' pada layar untuk memberitahu pengguna bahwa nilai data telah diambil dari stack pada index tertentu".
        Stack[top--];
        // digunakan untuk menghapus nilai data pada index teratas dari stack setelah operasi pop() dilakukan.
        // dapat dibaca sebagai "hapus nilai data pada index teratas dari stack setelah operasi pop() dilakukan".
    }
}

int clearr() // modul function
// Fungsi "clearr()" tidak memerlukan argumen masukan dan mengembalikan nilai bertipe integer
// dapat dibaca sebagai "fungsi untuk menghapus semua elemen pada stack dan mengembalikan nilai untuk memberikan informasi ke pengguna bahwa operasi clear berhasil dilakukan".
{
    return top = -1;
    // mengembalikan nilai variabel top yang telah di-set menjadi -1.

    // Secara lebih detail, baris kode ini berfungsi sebagai berikut:

    // Variabel top di-assign nilai -1
    // Nilai yang sama kemudian dikembalikan dari fungsi clearr() menggunakan operator return
    // Jadi, secara umum, baris kode ini dapat dibaca sebagai "Mengeset variabel top menjadi -1 dan mengembalikan nilai tersebut dari fungsi clearr()".
}

void Print() // modul prosedure
// Baris kode "void Print()" merupakan definisi fungsi
// prosedur yang bertipe data void.Fungsi ini bertujuan untuk mencetak isi dari stack ke layar console.
// Jadi, secara umum, baris kode ini dapat dibaca sebagai "Mendefinisikan sebuah prosedur bernama Print yang tidak memiliki nilai kembalian dan bertujuan untuk mencetak isi dari stack ke layar console".
{
    if (top == -1)
    // Secara umum, pernyataan "if (top == -1)" dapat dibaca sebagai "jika nilai variabel top sama dengan -1, lakukan tindakan tertentu".
    {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
        cout << "          Empty ! \n===========================" << endl;
        // dapat dibaca sebagai "Mencetak tampilan kosong dari stack dengan menampilkan string 'Stack : ', karakter '=', dan string 'Empty !' dengan beberapa spasi untuk membatasi tampilan".
    }
    else
    {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
        // dapat dibaca sebagai "Mencetak tampilan kosong dari stack dengan menampilkan string 'Stack : 'dan karakter '='".
        for (int i = top; i >= 0; i--)
        // Ini adalah sebuah loop yang akan iterasi dari top hingga 0, dengan decrement pada setiap iterasi.
        // Artinya, loop ini akan memproses setiap elemen pada stack dari elemen teratas ke elemen terbawah.

        {
            cout << "     XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
            // Ini adalah bagian dari prosedur Print() yang digunakan untuk mencetak nilai yang ada di dalam stack.
            // Baris ini akan mencetak tanda "XXXXX" di sebelah kiri dan kanan nilai di setiap indeks stack, sehingga kelihatan seperti nilai - nilai tersebut dikelilingi oleh tanda "XXXXX".
            // Setiap nilai pada indeks i dicetak dengan cara Stack[i].
        }
        cout << "===========================" << endl;
        // ada baris ini, output yang ditampilkan adalah pemisah atau garis horizontal, yang terdiri dari karakter "="
    }
}

int main()
// "int main()" dapat dibaca sebagai "fungsi utama yang mengembalikan nilai bertipe integer".
// Fungsi ini merupakan titik awal dari program C++ dan di dalamnya terdapat kode-kode program yang akan dieksekusi.
{
    int choose;
    // Variabel "choose" bertipe data integer, digunakan untuk menyimpan pilihan input yang akan dimasukkan oleh pengguna.
    do
    {
        Print();
        // Ini adalah bagian dari program yang memanggil modul Print(), yang berfungsi untuk menampilkan isi dari Stack.Jadi cara membacanya adalah "Program memanggil modul Print() untuk menampilkan isi dari Stack".

        cout
        << "\n1. Push"
        << "\n2. Pop"
        << "\n3. Clear"
        << "\n4. Exit"
        << "\nPergerakan ( TOP ) : " << top
        << "\n\n>> Choose : ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            push();
            getch();
            break;
        case 2:
            pop();
            getch();
            break;
        case 3:
            clearr();
            cout << "\nClear Succes" << endl;
            getch();
            break;
        case 4:
            cout << "Terima Kasih telah menggunakan program ini :)" << endl;
            getch();
            break;
        default:
            cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
            getch();
            break;
        }
        system("cls");
    } while (choose != 4);
}