# Stack

A **Stack** is a linear data structure that follows the **LIFO** (Last In, First Out) principle — the last element added is the first one to be removed.

Think of it like a stack of plates: you add/remove from the top only.

## Key Operations
- `push(x)` → Add element to top
- `pop()` → Remove and return top element
- `top()` / `peek()` → View top element without removing
- `empty()` / `size()` → Check if empty or get size

## Time Complexities
| Operation | Time  | Space |
|-----------|-------|-------|
| Push      | O(1)  | O(1)  |
| Pop       | O(1)  | O(1)  |
| Top/Peek  | O(1)  | O(1)  |

## When to Use Stack
- Parentheses matching
- Undo operations
- Function call recursion
- Next Greater Element
- Monotonic stack problems

## Implementations Covered
- Using Array (fixed size)
- Using Vector (dynamic — recommended)

## Advantages
- Simple and fast operations
- Great for backtracking

## Disadvantages
- Fixed size in array implementation
- No random access

## Files in This Folder
- `stack_using_array.cpp` → Fixed-size stack implementation
- `stack_using_vector.cpp` → Dynamic stack using std::vector

## Practice Problems
1. [LeetCode: Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
2. [LeetCode: Next Greater Element](https://leetcode.com/problems/next-greater-element-i/)
3. [LeetCode: Min Stack](https://leetcode.com/problems/min-stack/)

Happy Stacking! 