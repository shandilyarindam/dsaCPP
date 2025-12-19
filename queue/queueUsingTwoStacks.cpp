#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    stack<int> s1;  // For enqueue
    stack<int> s2;  // For dequeue

public:
    // Add element to rear
    void enqueue(int value) {
        s1.push(value);
        cout << value << " enqueued\n";
    }

    // Remove element from front
    void dequeue() {
        // If both stacks empty
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty! Cannot dequeue\n";
            return;
        }

        // If s2 is empty, transfer all from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        // Pop from s2 (which has oldest element on top)
        cout << s2.top() << " dequeued\n";
        s2.pop();
    }

    int front() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front: " << q.front() << endl;  // 1

    q.dequeue();  // Removes 1
    q.dequeue();  // Removes 2

    q.enqueue(4);

    cout << "Front after operations: " << q.front() << endl;  // 3

    return 0;
}