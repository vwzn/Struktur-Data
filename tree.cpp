#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // dibutuhkan untuk system("cls");
using namespace std;

struct tree_node
{
	tree_node* left;
	tree_node* right;
	int data;
};

tree_node* root;

bool isEmpty()
//bool tipe data boolean
//isEmpty() adalah nama fungsi nya
{
	return root==NULL;
	//NULL = tidak menunjuk
}

void insert(int d)
{
	tree_node* t = new tree_node;
	tree_node* parent;
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;
	if(isEmpty())root = t;
	else
	{
		tree_node* curr;
		curr = root;

		while(curr!=NULL)
		{
			parent = curr;
			if(t->data > curr->data) curr = curr->right;
				else curr = curr->left;
		}

		if(t->data < parent->data)
		parent->left = t;
		else
			parent->right = t;
	}
}

void inorder(tree_node* p)
{
	if(p!=NULL) 
	{
	if(p->left)
		inorder(p->left);
		cout<<" "<<p->data<<" ";
	if(p->right)
		inorder(p->right);
	}
	else
		return;
}


void print_inorder()
{
	inorder(root);
}

int count(tree_node* p)
{
	if(p==NULL)return 0;
	return count(p->left) + count(p->right) + 1;
}

int height(tree_node* p)
{
	if(p==NULL)return 0;
	int u = height(p->left),v = height(p->right);
	if(u > v)
		return u+1;
	else
		return v+1;
}

void cari_terbesar(tree_node* p)
{
	if(p==NULL)
		return;
	else
		if(p->right==NULL)
		{
			cout<<" "<<p->data<<" ";
			return;
		}
		else
		{
			cari_terbesar(p->right);
			return;
		}
}

int main()
{
	root=NULL;
	int ch,tmp;

	while(1)
	{
		system("cls"); // Saya mengganti scrclr() karena dicompiler sy tidak ada fungsi tersebut
		cout<<endl;
		cout<<"Menu Utama Operasi Pohon Biner"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Insert/Tambah Data"<<endl;
		cout<<"2. Kunjungan In-Order"<<endl;
		//cout<<"3. Kunjungan Pre-Order"<<endl;
		//cout<<"4. Kunjungan Post-Order"<<endl;
		//cout<<"5. Hapus Data"<<endl;
		cout<<"6. Menghitung Jumlah Node"<<endl;
		cout<<"7. Menghitung Tinggi Pohon"<<endl;
		//cout<<"8. Mencari Data Terkecil"<<endl;
		cout<<"9. Mencari Data Terbesar"<<endl;
		cout<<"10. Exit"<<endl;
		cout<<"Pilihan Anda : ";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{	
			case 1 :cout<<"Masukan Data : ";
					cin>>tmp;
					insert(tmp);
					break;
			case 2 :cout<<endl;
					cout<<"Kunjungan In-Order"<<endl;
					cout<<"---------------"<<endl;
					print_inorder();getch();
			break;
			case 6 :cout<<"Menghitung Jumlah Node"<<endl;
					cout<<"------------------"<<endl;
					cout<<"Jumlah Node = "<<count(root);
					getch();
					break;
			case 7 : cout<<"Menghitung Tinggi Pohon"<<endl;
					cout<<"------------------"<<endl;
					cout<<"Tinggi Pohon = "<<height(root);
					getch();
					break;
			case 9 :cout<<"Mecari Data Terbesar"<<endl;
					cout<<"------------------"<<endl;
					cout<<"Data Terbesar Adalah = "<<endl;
					cari_terbesar(root);
					getch();
					break;
			case 10 :return 0;
					break;
			default: cout<<"Pilihan yang Anda Masukkan salah!"<<endl;
					getch();
					break;
		}
	}
}
// 2 + 3 
// 2 + 3 === INORDER / INFIX
// + 2 3 === POSTORDER / PREFIX
// 2 3 + === PREORDER / POSTFIX