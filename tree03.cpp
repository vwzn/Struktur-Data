#include <iostream>
using namespace std;

struct TreeNode
// treenode adalah struktur data rekaman
{
    int data; // variable statis
    TreeNode *left; // treenode rekrusif , *left variable dinamis bertipe treenode
    TreeNode *right; // *right variable dinamis bertipe treenode 

    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};

int main()
{
    // Membangun pohon
    TreeNode *root = new TreeNode(1);

    TreeNode *leftChild = new TreeNode(2);
    TreeNode *rightChild = new TreeNode(3);

    root->left = leftChild;
    root->right = rightChild;

    TreeNode *leftChildChild1 = new TreeNode(4);
    TreeNode *leftChildChild2 = new TreeNode(5);

    leftChild->left = leftChildChild1;
    leftChild->right = leftChildChild2;

    TreeNode *rightChildChild1 = new TreeNode(6);
    TreeNode *rightChildChild2 = new TreeNode(7);

    rightChild->left = rightChildChild1;
    rightChild->right = rightChildChild2;

    TreeNode *leftChildChildChild1 = new TreeNode(8);
    TreeNode *leftChildChildChild2 = new TreeNode(9);

    leftChild->left->left = leftChildChildChild1;
    leftChild->left->right = leftChildChildChild2;

    // Akses dan cetak nilai dari simpul
    cout << "Nilai simpul root: " << root->data << endl;
    cout << "Nilai simpul anak kiri: " << root->left->data << endl;
    cout << "Nilai simpul anak kanan: " << root->right->data << endl;

    cout << "Nilai simpul cucu kiri kiri: " << root->left->left->data << endl;
    cout << "Nilai simpul cucu kiri kanan: " << root->left->right->data << endl;

    cout << "Nilai simpul cucu kanan kiri: " << root->right->left->data << endl;
    cout << "Nilai simpul cucu kanan kanan: " << root->right->right->data << endl;

    cout << "Nilai simpul cicit kiri kiri kiri: " << root->left->left->left->data << endl;
    cout << "Nilai simpul cicit kiri kiri kanan: " << root->left->left->right->data << endl;

    cout << endl;
    cout << "\t        1\n";
    cout << "\t      /   \\\n";
    cout << "\t     2     3\n";
    cout << "\t    / \\   /  \\\n";
    cout << "\t   4   5  6   7\n";
    cout << "\t  / \\\n";
    cout << "\t 8   9\n";
    cout << endl;

    return 0;
}