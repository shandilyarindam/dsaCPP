#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    map<char, TrieNode*> children;  // Can use array[26] for lowercase only
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the trie - O(length of word)
    void insert(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
        node->isEndOfWord = true;
    }

    // Search if word exists exactly - O(length)
    bool search(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                return false;
            }
            node = node->children[ch];
        }
        return node->isEndOfWord;
    }

    // Returns true if there is any word in trie that starts with prefix
    bool startsWith(const string& prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            if (node->children.find(ch) == node->children.end()) {
                return false;
            }
            node = node->children[ch];
        }
        return true;
    }

    // Optional: Delete a word (advanced - not always asked)
    // Left as exercise or can be added later
};

// Example usage
int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");
    trie.insert("batman");

    cout << boolalpha;
    cout << "search('apple'): " << trie.search("apple") << endl;     // true
    cout << "search('app'): " << trie.search("app") << endl;         // true
    cout << "search('apps'): " << trie.search("apps") << endl;       // false
    cout << "startsWith('app'): " << trie.startsWith("app") << endl; // true
    cout << "startsWith('bat'): " << trie.startsWith("bat") << endl; // true
    cout << "startsWith('cat'): " << trie.startsWith("cat") << endl; // false

    return 0;
}