# Stack

A **Stack** is a linear data structure that follows the **LIFO** (Last In, First Out) principle. Elements are added and removed from the same end (top).

Stacks are fundamental in interview problems involving matching, backtracking, and monotonic sequences.

## Key Operations
- `push(x)` → Add element to top (O(1))
- `pop()` → Remove and return top element (O(1))
- `peek()` / `top()` → View top element (O(1))
- `isEmpty()` → Check if stack is empty

## Implementations Covered (Interview-Focused)
- **Array-based** → Fixed size, simple, good for understanding overflow
- **Vector-based** → Dynamic size (recommended for flexibility)
- **Linked List-based** → Fully dynamic, O(1) push/pop at head

All implementations handle edge cases (empty stack, overflow).

## Time & Space Complexity
| Operation | Time (All Implementations) | Space |
|-----------|----------------------------|-------|
| Push/Pop  | O(1)                       | O(n) total |

## When to Use Stack
- Parentheses matching
- Expression evaluation
- Depth-First Search (DFS)
- Next/Greater/Smaller Element problems
- Undo operations

## Files in This Folder
- `stack_array.cpp` → Fixed-size array implementation
- `stack_vector.cpp` → Dynamic using `std::vector` (most practical)
- `stack_linkedlist.cpp` → Using singly linked list

## Must-Do Interview Problems
1. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
2. [Min Stack](https://leetcode.com/problems/min-stack/)
3. [Next Greater Element I/II](https://leetcode.com/problems/next-greater-element-i/)
4. [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)
5. [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)

Master monotonic stack technique — it's asked frequently!

Happy Stacking! 