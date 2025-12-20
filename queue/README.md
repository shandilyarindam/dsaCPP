# Queue

A **Queue** is a linear data structure that follows the **FIFO** (First In, First Out) principle. Elements are added at the rear and removed from the front.

Queues are essential for level-order processing, scheduling, and breadth-first algorithms.

## Key Operations
- `enqueue(x)` / `push(x)` → Add to rear
- `dequeue()` / `pop()` → Remove from front
- `front()` / `peek()` → View front element
- `isEmpty()` → Check if empty

## Implementations Covered (Interview-Focused)
- **Circular Array** → Efficient O(1) operations, fixed size
- **Linked List** → Fully dynamic, O(1) enqueue/dequeue
- **Two Stacks** → Classic interview question (amortized O(1))

## Time Complexity Comparison
| Implementation       | Enqueue   | Dequeue                  | Notes                              |
|----------------------|-----------|--------------------------|------------------------------------|
| Circular Array       | O(1)      | O(1)                     | Cache-friendly, fixed capacity     |
| Linked List          | O(1)      | O(1)                     | Dynamic size                       |
| Two Stacks           | O(1)      | Amortized O(1), Worst O(n)| Frequently asked in interviews     |

## When to Use Queue
- Breadth-First Search (BFS)
- Sliding window problems
- Task scheduling
- Level-order tree traversal
- Implement cache (LRU uses deque)

## Files in This Folder
- `queue_circular_array.cpp` → Efficient circular array implementation
- `queue_linkedlist.cpp` → Dynamic using singly linked list
- `queue_using_two_stacks.cpp` → Using two stacks (classic interview style)

## Must-Do Interview Problems
1. [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
2. [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) (uses deque)
3. [Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)
4. [Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/)
5. [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)

The two-stacks implementation is a **favorite** in interviews — know the amortized analysis!

Happy Queuing! 🚀

