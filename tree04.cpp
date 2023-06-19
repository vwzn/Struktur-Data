#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
// kiri simpul kanan
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}


void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    //  simpul kiri kanan
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // kiri kanan simpul
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    // Membangun pohon biner sederhana
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Nilai data di root: " << root->data << endl;
    cout << "Nilai data cabang kiri: " << root->left->data << endl;
    cout << "Nilai data cabang kanan: " << root->right->data << endl;
    cout << "Nilai data cabang kiri - kiri: " << root->left->left->data << endl;
    cout << "Nilai data cabang kiri - kanan: " << root->left->right->data << endl;

    cout << endl;
    cout << "\t       1\n";
    cout << "\t      / \\\n";
    cout << "\t     2  3\n";
    cout << "\t    / \\\n";
    cout << "\t   4   5 \n";

    cout << endl;
    cout << "Inorder Traversal: "; // left , root , right = dimulai dari data paling kiri 4 (left), 2 (root dari 4) , 5 (right dari 2 yang mana 2 adalah root), 1 (root utama), 3 (right dari root utama)
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: "; // root , left , right = 1 root, 2 left, karena 2 juga menjadi root maka lanjut ke left dari 2 , 4 leftLeft, 5 rightLeft, 3 right
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: "; // root , left , right = 1 root, 2 left, karena 2 juga menjadi root maka lanjut ke left dari 2 , 4 leftLeft, 5 rightLeft, 3 right
    postorderTraversal(root);
    cout << endl;
    return 0;
}
