#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    vector<int> vec;  // Dynamic array using vector

public:
    // Push element
    void push(int value) {
        vec.push_back(value);
        cout << value << " pushed to stack\n";
    }

    // Pop top element
    void pop() {
        if (vec.empty()) {
            cout << "Stack Underflow! Cannot pop\n";
            return;
        }
        cout << vec.back() << " popped from stack\n";
        vec.pop_back();
    }

    // Get top element
    int top() {
        if (vec.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return vec.back();
    }

    // Check if empty
    bool empty() {
        return vec.empty();
    }

    // Get size
    int size() {
        return vec.size();
    }
};

int main() {
    Stack s;

    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);

    cout << "Current top: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    s.pop();
    s.pop();

    cout << "After two pops, top: " << s.top() << endl;

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\nStack is now empty\n";

    return 0;
}