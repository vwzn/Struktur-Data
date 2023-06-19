#include <iostream>
using namespace std;

struct TreeNode
{
    string data;
    TreeNode *left;
    TreeNode *right;//bintang adalah struktur dinamis

    TreeNode(string val) : data(val), left(NULL), right(NULL) {}
};

int main()
{
    // Membangun pohon
    TreeNode *root = new TreeNode("Akar");
    TreeNode *leftChild = new TreeNode("Left");
    TreeNode *rightChild = new TreeNode("Right");

    root->left = leftChild;
    root->right = rightChild;

    // Akses dan cetak nilai dari simpul
    cout << "Nilai simpul root: " << root->data << endl;
    cout << "Nilai simpul anak kiri: " << root->left->data << endl;
    cout << "Nilai simpul anak kanan: " << root->right->data << endl;

    cout << endl;
    cout << "\t        Akar\n";
    cout << "\t      /      \\\n";
    cout << "\t    Left     Right\n";

    return 0;
}