#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    // Recursive Inorder (Left-Root-Right)
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }

    // Recursive Preorder (Root-Left-Right)
    void preorder(TreeNode* root) {
        if (!root) return;
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }

    // Recursive Postorder (Left-Right-Root)
    void postorder(TreeNode* root) {
        if (!root) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }

    // Level Order Traversal (BFS) - Iterative (VERY COMMON)
    void levelOrder(TreeNode* root) {
        if (!root) return;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            cout << node->val << " ";
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << endl;
    }

    // Max Depth (Height) of Tree
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left, right);
    }

    // Invert Binary Tree (Mirror) - Classic Interview
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        TreeNode* temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);
        return root;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    BinaryTree bt;
    cout << "Inorder: "; bt.inorder(root); cout << endl;
    cout << "Level Order: "; bt.levelOrder(root);
    cout << "Max Depth: " << bt.maxDepth(root) << endl;

    return 0;
}