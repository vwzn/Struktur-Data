#include <iostream>
#include <string>
using namespace std;

// Struktur node untuk merepresentasikan simpul dalam pohon
struct Node
{
    string data;
    Node *left;
    Node *right;
};

// Fungsi untuk membuat simpul baru dengan nilai tertentu
Node *createNode(string data)
{
    Node *newNode = new Node();
    if (newNode)
    {
        newNode->data = data;
        newNode->left = newNode->right = NULL;
    }
    return newNode;
}

// Fungsi untuk menambahkan simpul baru ke pohon
Node *insertNode(Node *root, string data)
{
    // Jika pohon kosong, buat simpul baru dan jadikan sebagai root
    if (root == NULL)
    {
        root = createNode(data);
        return root;
    }

    // Jika data yang akan ditambahkan lebih kecil daripada data root, masukkan ke subtree kiri
    if (data.length() < root->data.length())
    {
        root->left = insertNode(root->left, data);
    }
    // Jika data yang akan ditambahkan lebih besar daripada data root, masukkan ke subtree kanan
    else if (data.length() > root->data.length())
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}


// Fungsi untuk melakukan traversal inorder pada pohon
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    root = insertNode(root, "Fauzan");
    insertNode(root, "Fahim");
    insertNode(root, "Pahnihann");
    insertNode(root, "Chandra");
    insertNode(root, "Aliph");
    insertNode(root, "Wi");
    insertNode(root, "fsddddddddp");

    cout << "Traversal inorder pada pohon: ";
    inorderTraversal(root);
    cout << std::endl;

    cout << "root :" << root->data << " ";
    cout << std::endl;

    cout << "left :";
    inorderTraversal(root->left);
    cout << std::endl;

    cout << "right :";
    inorderTraversal(root->right);
    cout << std::endl;


    cout << "Nilai simpul root: " << root->data << endl;
    cout << "Nilai simpul anak kiri: " << root->left->data << endl;
    cout << "Nilai simpul anak kanan: " << root->right->data << endl;

    cout << "Nilai simpul cucu kiri kiri: " << root->left->left->data << endl;
    cout << "Nilai simpul cucu kiri kanan: " << root->left->right->data << endl;

    cout << "Nilai simpul cucu kanan kiri: " << root->right->left->data << endl;
    cout << "Nilai simpul cucu kanan kanan: " << root->right->right->data << endl;


    cout << endl;
    cout << "\t         50\n";
    cout << "\t        /   \\\n";
    cout << "\t      30    70\n";
    cout << "\t     /  \\   / \\\n";
    cout << "\t    20  40 60  80\n";
    cout << endl;


    return 0;
}