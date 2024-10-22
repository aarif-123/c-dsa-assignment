// Day - 46 Questions - Week-09 (October 18th, 2024)
// Ques 1. Write a C++ function to calculate the height (or depth) of a binary tree. The height of a binary tree is the number of edges in the longest path from the root to a leaf node.

// For the binary tree below, calculate the height:
// 1
// / \
// 2 3
// / \
// 4 5

// Output :- Height of the tree: 2

// Ques 2. Write a C++ function to count the total number of nodes in a binary tree. Implement a recursive approach.
// For the tree below, calculate the total number of nodes:

// 1
// / \
// 2 3
// / \
// 4 5

// Output :Total number of nodes: 5

// Ques 3. Write a C++ function to find the maximum value stored in a binary tree. Implement a recursive solution to traverse the tree and find the largest element.
// For the tree below, find the maximum value:
// 10
// / \
// 20 30
// / \
// 40 50

// Output:- Maximum value: 50



// q1
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int height(TreeNode* root) {
    if (root == NULL) {
        return -1;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Height of the tree: " << height(root) << endl;

    return 0;
}



// q2
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int countNodes(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Total number of nodes: " << countNodes(root) << endl;

    return 0;
}




// q3


#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findMax(TreeNode* root) {
    if (root == NULL) {
        return INT_MIN;
    }
    int maxLeft = findMax(root->left);
    int maxRight = findMax(root->right);
    return max(root->val, max(maxLeft, maxRight));
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);

    cout << "Maximum value: " << findMax(root) << endl;

    return 0;
}

