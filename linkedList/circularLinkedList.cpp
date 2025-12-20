#include <bits/stdc++.h>
using namespace std;

struct CircularNode {
    int data;
    CircularNode* next;
    CircularNode(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
public:
    CircularNode* head;

    CircularLinkedList() : head(nullptr) {}

    // Insert at head
    void insert(int val) {
        CircularNode* newNode = new CircularNode(val);
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            CircularNode* temp = head;
            while (temp->next != head) temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
            head = newNode;  // Make new node head (optional)
        }
    }

    // Delete head
    void deleteHead() {
        if (!head) return;
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }
        CircularNode* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = head->next;
        delete head;
        head = temp->next;
    }

    // Print circular list
    void print() {
        if (!head) return;
        CircularNode* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)\n";
    }
};