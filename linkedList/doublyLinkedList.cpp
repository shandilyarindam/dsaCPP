#include <bits/stdc++.h>
using namespace std;

struct DoublyNode {
    int data;
    DoublyNode* prev;
    DoublyNode* next;
    DoublyNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    DoublyNode* head;

    DoublyLinkedList() : head(nullptr) {}

    // Insert at head
    void insertAtHead(int val) {
        DoublyNode* newNode = new DoublyNode(val);
        newNode->next = head;
        if (head) head->prev = newNode;
        head = newNode;
    }

    // Delete node (given pointer) - Common in interviews
    void deleteNode(DoublyNode* node) {
        if (!node) return;
        if (node->prev) node->prev->next = node->next;
        if (node->next) node->next->prev = node->prev;
        if (head == node) head = node->next;
        delete node;
    }

    // Reverse doubly linked list - Easy due to prev pointers
    void reverse() {
        DoublyNode* temp = nullptr;
        DoublyNode* curr = head;
        while (curr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;  // Move forward in reversed direction
        }
        if (temp) head = temp->prev;
    }

    // Print forward
    void print() {
        DoublyNode* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};