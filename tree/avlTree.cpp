#include <bits/stdc++.h>
using namespace std;

struct AVLNode {
    int val;
    AVLNode* left;
    AVLNode* right;
    int height;
    AVLNode(int x) : val(x), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
public:
    int height(AVLNode* node) {
        return node ? node->height : 0;
    }

    int balanceFactor(AVLNode* node) {
        return node ? height(node->left) - height(node->right) : 0;
    }

    void updateHeight(AVLNode* node) {
        node->height = 1 + max(height(node->left), height(node->right));
    }

    // Right Rotate (LL case)
    AVLNode* rightRotate(AVLNode* y) {
        AVLNode* x = y->left;
        AVLNode* T2 = x->right;
        x->right = y;
        y->left = T2;
        updateHeight(y);
        updateHeight(x);
        return x;
    }

    // Left Rotate (RR case)
    AVLNode* leftRotate(AVLNode* x) {
        AVLNode* y = x->right;
        AVLNode* T2 = y->left;
        y->left = x;
        x->right = T2;
        updateHeight(x);
        updateHeight(y);
        return y;
    }

    AVLNode* insert(AVLNode* node, int val) {
        if (!node) return new AVLNode(val);

        if (val < node->val)
            node->left = insert(node->left, val);
        else if (val > node->val)
            node->right = insert(node->right, val);
        else return node; // Duplicates not allowed

        updateHeight(node);
        int balance = balanceFactor(node);

        // Left Left
        if (balance > 1 && val < node->left->val)
            return rightRotate(node);

        // Right Right
        if (balance < -1 && val > node->right->val)
            return leftRotate(node);

        // Left Right
        if (balance > 1 && val > node->left->val) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        // Right Left
        if (balance < -1 && val < node->right->val) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    void inorder(AVLNode* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
};