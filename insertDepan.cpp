// #include <stdio.h>
#include <iostream>
// #include <conio.h>
using namespace std;

struct TNode
{
    int data;
    TNode *next;
};

TNode *head, *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

int isEmpty()
{
    if (tail == NULL)
        return 1;
    else
        return 0;
}

void insertDepan(int databaru)
{
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
    cout << "Data masuk\n";
}

main()
{
    int databaru;
    cout << "Masukkan Data = ";
    cin >> databaru;
    insertDepan(databaru);
    
}