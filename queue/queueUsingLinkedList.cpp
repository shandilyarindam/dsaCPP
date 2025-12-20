// queue_linkedlist.cpp
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node *front, *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (!rear) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (!front) return -1;
        Node* temp = front;
        int val = temp->data;
        front = front->next;
        if (!front) rear = nullptr;
        delete temp;
        return val;
    }

    int getFront() {
        if (!front) return -1;
        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
    }
};