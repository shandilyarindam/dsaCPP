#include <bits/stdc++.h>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[parent] > heap[index]) {
                swap(heap[parent], heap[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int size = heap.size();
        while (true) {
            int smallest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < size && heap[left] < heap[smallest])
                smallest = left;
            if (right < size && heap[right] < heap[smallest])
                smallest = right;

            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }

public:
    void push(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int pop() {
        if (heap.empty()) return -1;
        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty()) heapifyDown(0);
        return root;
    }

    int top() {
        return heap.empty() ? -1 : heap[0];
    }

    bool empty() {
        return heap.empty();
    }

    int size() {
        return heap.size();
    }
};

int main() {
    MinHeap mh;
    mh.push(3);
    mh.push(1);
    mh.push(4);
    mh.push(2);

    cout << "Top: " << mh.top() << endl;  // 1
    cout << "Pop: " << mh.pop() << endl;  // 1
    cout << "Top after pop: " << mh.top() << endl;  // 2

    return 0;
}