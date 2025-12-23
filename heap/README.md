# Heap (Priority Queue)

A **Heap** is a complete binary tree-based data structure that satisfies the heap property. It is primarily used to implement **priority queues** — one of the most frequently asked topics in interviews.

This folder focuses on **Min Heap** and **Max Heap** for priority queue operations.

## Key Concepts
- **Complete Binary Tree**: Filled level by level, left to right
- **Min Heap**: Parent ≤ Children (smallest element at root)
- **Max Heap**: Parent ≥ Children (largest element at root)
- Array representation: Parent at i → Left child at 2i+1, Right at 2i+2

## Operations & Time Complexity
| Operation             | Time Complexity | Notes                              |
|-----------------------|-----------------|------------------------------------|
| Insert (push)         | O(log n)        |                                    |
| Extract Min/Max (pop) | O(log n)        | Removes root                       |
| Peek (top)            | O(1)            | View root                          |
| Build Heap            | O(n)            | From unsorted array                |

## Advantages
- Fast access to min/max element
- Used in Dijkstra, Prim's MST
- Top K / Kth largest/smallest problems
- Median maintenance

## Files in This Folder
- `min_heap.cpp` → Manual array-based Min Heap (insert, extractMin, peek)
- `max_heap_stl.cpp` → Using std::priority_queue (max heap) with custom comparators and examples

## Must-Do Interview Problems
1. [Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) - Min Heap
2. [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) - Min Heap of pairs
3. [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) - Min Heap of ListNodes
4. [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) - Two Heaps (max + min)
5. [K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) - Max Heap (size K)

## Pro Tips for Interviews
- C++ `priority_queue` is **Max Heap** by default
- Min Heap: `priority_queue<int, vector<int>, greater<int>> pq;`
- For pairs: `priority_queue<pair<int,int>>` — first element decides priority
- For custom objects: define comparator or use lambda
- Two heaps pattern for median is classic
- Always ask: "Do duplicates allowed?" "What if K > N?"

Heaps are **guaranteed** in almost every interview — master them!