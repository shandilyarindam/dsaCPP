# Linked List

A **Linked List** is a linear data structure consisting of nodes where each node contains data and a pointer/reference to the next node. Unlike arrays, linked lists do not store elements in contiguous memory, allowing dynamic size and efficient insertions/deletions.

This folder focuses on **interview-relevant** implementations and techniques.

## Types Covered
- **Singly Linked List** → Most common in interviews (90%+ of problems)
- **Doubly Linked List** → Occasionally asked (easier reversal/deletion)
- **Circular Linked List** → Rarely asked directly

## Key Operations & Complexities (Singly)
| Operation              | Time Complexity | Notes                                      |
|------------------------|-----------------|--------------------------------------------|
| Insert at head         | O(1)            |                                            |
| Insert at tail         | O(n) (no tail pointer)                         |
| Delete node            | O(1) (with pointer), O(n) otherwise            |
| Search                 | O(n)            |                                            |
| Reverse                | O(n)            | Iterative (preferred in interviews)        |
| Detect Cycle           | O(n)            | Floyd's Tortoise & Hare                    |
| Find Middle            | O(n)            | Slow-Fast pointer technique                |

## Advantages Over Arrays
- Dynamic size
- Efficient insertion/deletion at known positions (especially head)

## Disadvantages
- No random access (O(n) for index access)
- Extra memory for pointers
- Poor cache performance

## Interview Tips
- Master **pointer manipulation** and edge cases (empty list, single node, head changes)
- Know **two-pointer techniques**: slow-fast, dummy node, length calculation
- Iterative reversal > recursive (better space)
- Floyd's cycle detection is a classic

## Files in This Folder
- `singly_linked_list.cpp` → Full interview-focused implementation (insert, delete, reverse, cycle detection, middle)
- `doubly_linked_list.cpp` → Basic doubly linked list with reverse and deletion
- `circular_linked_list.cpp` → Basic circular list operations

## Must-Do Interview Problems
1. [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
2. [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
3. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
4. [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
5. [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
6. [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)

These cover 95% of linked list questions asked in interviews.

Master singly linked list first — it's the foundation!

Happy Coding! 