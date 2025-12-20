// stack_linkedlist.cpp
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (!top) return -1;
        Node* temp = top;
        int val = temp->data;
        top = top->next;
        delete temp;
        return val;
    }

    int peek() {
        if (!top) return -1;
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};