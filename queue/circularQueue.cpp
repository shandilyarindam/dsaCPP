// queue_circular_array.cpp
#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    static const int MAX = 1000;
    int arr[MAX];
    int front, rear, size;

public:
    Queue() {
        front = 0;
        rear = -1;
        size = 0;
    }

    bool enqueue(int x) {
        if (size == MAX) {
            cout << "Queue Full\n";
            return false;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        size++;
        return true;
    }

    int dequeue() {
        if (size == 0) {
            cout << "Queue Empty\n";
            return -1;
        }
        int val = arr[front];
        front = (front + 1) % MAX;
        size--;
        return val;
    }

    int getFront() {
        if (size == 0) return -1;
        return arr[front];
    }

    bool isEmpty() {
        return size == 0;
    }
};