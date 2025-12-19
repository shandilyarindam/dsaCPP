#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000;

class Queue {
private:
    int arr[MAX_SIZE];
    int frontIdx;  // Points to front element
    int rearIdx;   // Points to where next element will be added
    int currSize;  // Current number of elements

public:
    Queue() {
        frontIdx = 0;
        rearIdx = -1;
        currSize = 0;
    }

    void enqueue(int value) {
        if (currSize == MAX_SIZE) {
            cout << "Queue is full! Cannot enqueue " << value << endl;
            return;
        }
        rearIdx = (rearIdx + 1) % MAX_SIZE;  // Circular increment
        arr[rearIdx] = value;
        currSize++;
        cout << value << " enqueued to queue\n";
    }

    void dequeue() {
        if (currSize == 0) {
            cout << "Queue is empty! Cannot dequeue\n";
            return;
        }
        cout << arr[frontIdx] << " dequeued from queue\n";
        frontIdx = (frontIdx + 1) % MAX_SIZE;  // Circular increment
        currSize--;
    }

    int front() {
        if (currSize == 0) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[frontIdx];
    }

    bool empty() {
        return currSize == 0;
    }

    int size() {
        return currSize;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;

    q.dequeue();
    q.dequeue();

    cout << "After two dequeues, front: " << q.front() << endl;

    return 0;
}