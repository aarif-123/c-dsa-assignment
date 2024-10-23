// Ques 1. Implement a function in C++ to perform an inorder traversal of a binary tree. Inorder traversal visits nodes in the following order: left, root, right.

// Perform inorder traversal on the following tree:
// 1
// / \
// 2 3
// / \
// 4 5
// Expected Output :- 4 2 5 1 3

// Ques 2. mplement a function in C++ to perform a postorder traversal of a binary tree. Postorder traversal visits nodes in the following order: left, right, root.

// Perform postorder traversal on the following tree:
// 1
// / \
// 2 3
// / \
// 4 5
// Expected Output :- 4 5 2 3 1




// q1

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inorderTraversal(root);
    cout << endl;

    return 0;
}













// q2

#include <iostream>
using namespace std;

void postorderTraversal(Node* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    postorderTraversal(root);
    cout << endl;

    return 0;
}


