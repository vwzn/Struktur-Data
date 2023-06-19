#include <iostream>
#include <conio.h>
using namespace std;

struct STACK
{
    int data[5];
    int atas;
} tumpukan;

STACK tumpuk;

void push();
void show();

int main()
{
    push();
    cout << endl;
    show();
    cout << endl
        << "selesai..";
    getch();
}

void push()
{
    int ulang, baru, i;
    tumpuk.atas = -1;
    ulang = 0;
    do
    {
        if (tumpuk.atas == 5 - 1)
        {
            cout << "Tumpukan Penuh";
            cout << endl;
            getch();
        }
        else
        {
            cout << "Data angka yang akan di-push = ";
            cin >> baru;
            tumpuk.atas++;
            tumpuk.data[tumpuk.atas] = baru;
        }

        ulang++;
    } while (ulang < 5);
}

void show()
{
    for (int i = 0; i <= tumpuk.atas; i++)
        cout << "Nilai ruang ke " << i << " : " << tumpuk.data[i] << endl;
}