#include <bits/stdc++.h>
using namespace std;

int main() {
    // Max Heap (default)
    priority_queue<int> maxHeap;
    maxHeap.push(3);
    maxHeap.push(1);
    maxHeap.push(4);
    maxHeap.push(2);

    cout << "Max Heap Top: " << maxHeap.top() << endl;  // 4

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(3);
    minHeap.push(1);
    minHeap.push(4);
    minHeap.push(2);

    cout << "Min Heap Top: " << minHeap.top() << endl;  // 1

    // Custom: Top K Frequent (pair: frequency, element)
    priority_queue<pair<int, int>> pq;  // Max heap on frequency
    // Example usage
    vector<int> nums = {1,1,1,2,2,3};
    unordered_map<int, int> freq;
    for (int n : nums) freq[n]++;
    for (auto& p : freq) {
        pq.push({p.second, p.first});
    }
    cout << "Most frequent: " << pq.top().second << endl;  // 1

    return 0;
}