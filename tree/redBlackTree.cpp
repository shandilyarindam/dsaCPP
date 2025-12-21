// red_black_tree.cpp (Interview-Focused: Insert with Color Fixes)
#include <bits/stdc++.h>
using namespace std;

enum Color { RED, BLACK };

struct RBNode {
    int val;
    Color color;
    RBNode *left, *right, *parent;
    RBNode(int v) : val(v), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
};

class RedBlackTree {
private:
    RBNode* root;

    void leftRotate(RBNode* x) {
        RBNode* y = x->right;
        x->right = y->left;
        if (y->left) y->left->parent = x;
        y->parent = x->parent;
        if (!x->parent) root = y;
        else if (x == x->parent->left) x->parent->left = y;
        else x->parent->right = y;
        y->left = x;
        x->parent = y;
    }

    void rightRotate(RBNode* y) {
        RBNode* x = y->left;
        y->left = x->right;
        if (x->right) x->right->parent = y;
        x->parent = y->parent;
        if (!y->parent) root = x;
        else if (y == y->parent->right) y->parent->right = x;
        else y->parent->left = x;
        x->right = y;
        y->parent = x;
    }

    void fixInsert(RBNode* z) {
        while (z->parent && z->parent->color == RED) {
            if (z->parent == z->parent->parent->left) {
                RBNode* uncle = z->parent->parent->right;
                if (uncle && uncle->color == RED) {
                    z->parent->color = BLACK;
                    uncle->color = BLACK;
                    z->parent->parent->color = RED;
                    z = z->parent->parent;
                } else {
                    if (z == z->parent->right) {
                        z = z->parent;
                        leftRotate(z);
                    }
                    z->parent->color = BLACK;
                    z->parent->parent->color = RED;
                    rightRotate(z->parent->parent);
                }
            } else {
                // Symmetric right case
                RBNode* uncle = z->parent->parent->left;
                if (uncle && uncle->color == RED) {
                    z->parent->color = BLACK;
                    uncle->color = BLACK;
                    z->parent->parent->color = RED;
                    z = z->parent->parent;
                } else {
                    if (z == z->parent->left) {
                        z = z->parent;
                        rightRotate(z);
                    }
                    z->parent->color = BLACK;
                    z->parent->parent->color = RED;
                    leftRotate(z->parent->parent);
                }
            }
        }
        root->color = BLACK;
    }

public:
    RedBlackTree() : root(nullptr) {}

    void insert(int val) {
        RBNode* node = new RBNode(val);
        RBNode* parent = nullptr;
        RBNode* current = root;

        while (current) {
            parent = current;
            if (node->val < current->val) current = current->left;
            else current = current->right;
        }

        node->parent = parent;
        if (!parent) root = node;
        else if (node->val < parent->val) parent->left = node;
        else parent->right = node;

        fixInsert(node);
    }

    void inorder(RBNode* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->val << (node->color == RED ? "(R) " : "(B) ");
        inorder(node->right);
    }

    void print() { inorder(root); cout << endl; }
};