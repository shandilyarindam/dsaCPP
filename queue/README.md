# Queue

A **Queue** is a linear data structure that follows the **FIFO** (First In, First Out) principle — the first element added is the first one to be removed.

Think of it like a line at a ticket counter.

## Key Operations
- `enqueue(x)` / `push(x)` → Add element to rear
- `dequeue()` / `pop()` → Remove and return front element
- `front()` / `peek()` → View front element
- `empty()` / `size()` → Check status

## Time Complexities
| Operation | Time  | Space |
|-----------|-------|-------|
| Enqueue   | O(1)  | O(1)  |
| Dequeue   | O(1)  | O(1)  |

## When to Use Queue
- BFS (Breadth-First Search)
- Task scheduling
- Sliding window problems
- Level-order tree traversal

## Implementations Covered
- Using Array (circular queue concept)
- Using Two Stacks (common interview question)

## Advantages
- Predictable order
- Useful in level-by-level processing

## Disadvantages
- Array implementation needs circular handling for efficiency

## Files in This Folder
- `queue_using_array.cpp` → Circular queue with array
- `queue_using_two_stacks.cpp` → Queue implemented using two stacks

## Practice Problems
1. [LeetCode: Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
2. [LeetCode: Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) (uses deque)
3. [LeetCode: Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)

Happy Queuing! 