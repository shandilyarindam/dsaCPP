#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST {
public:
    // Insert node
    TreeNode* insert(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);
        if (val < root->val)
            root->left = insert(root->left, val);
        else if (val > root->val)
            root->right = insert(root->right, val);
        return root;
    }

    // Search node
    TreeNode* search(TreeNode* root, int val) {
        if (!root || root->val == val) return root;
        if (val < root->val) return search(root->left, val);
        return search(root->right, val);
    }

    // Find min value node (for delete)
    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->left) current = current->left;
        return current;
    }

    // Delete node (3 cases)
    TreeNode* deleteNode(TreeNode* root, int val) {
        if (!root) return root;
        if (val < root->val)
            root->left = deleteNode(root->left, val);
        else if (val > root->val)
            root->right = deleteNode(root->right, val);
        else {
            // Node with only one child or no child
            if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // Node with two children
            TreeNode* temp = minValueNode(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
        return root;
    }

    // Inorder traversal (gives sorted order)
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
};