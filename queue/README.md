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

# Queue Implementations: Two Stacks vs Traditional (Circular Array)

When implementing a **Queue** (FIFO - First In, First Out), there are multiple approaches. Two common ones are:

1. **Traditional Circular Array**
2. **Using Two Stacks**

Both achieve the goal, but they differ in performance, complexity, and use cases.

## Complexity Comparison

| Aspect                  | Circular Array (Traditional)                  | Two Stacks                                   |
|-------------------------|-----------------------------------------------|---------------------------------------------|
| **Enqueue**             | O(1)                                          | O(1)                                        |
| **Dequeue**             | O(1)                                          | Amortized O(1)<br>Worst-case O(n)            |
| **Space Complexity**    | O(n)                                          | O(n)                                        |
| **Memory Usage**        | Contiguous memory → cache-friendly            | Slightly higher overhead (two stacks)       |
| **Dynamic Sizing**      | Fixed or needs resizing (can use vector)      | Naturally dynamic                           |
| **Implementation**      | Requires circular logic (modulo)              | Simpler logic, no wrap-around needed        |

## Advantages of Two Stacks Approach

1. **Classic Interview Problem**  
   Frequently asked in interviews (e.g., LeetCode #232: Implement Queue using Stacks). Shows deep understanding of how LIFO can simulate FIFO.

2. **Simpler Logic in Some Cases**  
   No need to handle circular indexing or modulo operations, which can have edge cases in fixed-size arrays.

3. **Works When Only Stack is Available**  
   Useful in scenarios where you're restricted to stack operations only.

4. **Amortized Efficiency**  
   With lazy transfer (only move elements when needed), average cost per operation is O(1) over a sequence of operations.

5. **Naturally Dynamic**  
   No fixed size limit — grows as needed (stacks handle resizing internally).

## Disadvantages of Two Stacks

- **Worst-case O(n) for Dequeue**  
  If you enqueue n elements and then dequeue, it transfers all n elements at once.
- **Less Cache-Friendly**  
  Elements get moved between stacks.
- **Higher Constant Factors**  
  More operations during transfer.

## When to Use Which?

| Scenario                               | Recommended Implementation          |
|----------------------------------------|-------------------------------------|
| Real-world performance & speed         | Circular Array / `std::deque`       |
| Interview / Learning amortized analysis| Two Stacks                          |
| Restricted to stack operations only    | Two Stacks                          |
| Need predictable O(1) worst-case       | Circular Array                      |
| Functional programming / immutability  | Two Stacks (or persistent queues)   |

## Conclusion

- **In Production / Libraries** (`std::queue` in C++): Uses **deque** (double-ended queue, array-based) for speed and efficiency.
- **In Interviews / Tutorials**: **Two Stacks** is valuable to know because it tests conceptual understanding and amortized analysis.

For your DSA repo, including **both** implementations is perfect:
- Show **circular array** as the efficient real-world method.
- Show **two stacks** as a clever, interview-style alternative.

Happy Coding! 🚀

## Practice Problems
1. [LeetCode: Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
2. [LeetCode: Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) (uses deque)
3. [LeetCode: Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)

Happy Queuing! 

