# Arrays

An **array** is a collection of elements of the same data type stored in contiguous memory locations. It is one of the simplest and most widely used data structures.

In C++, we primarily use `std::vector` (dynamic array) for flexibility, but static arrays are also covered.

## Key Concepts
- Fixed size for static arrays, dynamic/resizable for `vector`
- Zero-based indexing (`arr[0]` is the first element)
- Random access in O(1) time
- Elements are stored consecutively in memory (cache-friendly)

## Common Operations & Complexities
| Operation              | Time Complexity | Notes                                      |
|------------------------|-----------------|--------------------------------------------|
| Access by index        | O(1)            | Fastest way to retrieve an element         |
| Insertion (at end)     | O(1) amortized (vector) | O(n) if using static array |
| Insertion (at beginning/middle) | O(n)   | Need to shift elements                     |
| Deletion               | O(n)            | Need to shift elements                     |
| Search (unsorted)      | O(n)            | Linear search                              |
| Search (sorted)        | O(log n)        | Binary search                              |

## When to Use Arrays
- Need fast access by index
- Size is known or doesn't change frequently
- Implementing other data structures (like hash tables, graphs)
- Problems involving prefixes, suffixes, two-pointers, sliding window

## Advantages
- O(1) random access
- Simple and efficient memory usage
- Great cache performance

## Disadvantages
- Static arrays have fixed size (can't resize)
- Insertion/deletion in middle is costly
- Wastes memory if not fully utilized

## Files in This Folder
- `array_basics.cpp` → Introduction to static arrays and `std::vector`, traversal, push_back
- `array_operations.cpp` → Common operations: find max, reverse array

## Practice Problems (Recommended)
1. [LeetCode: Two Sum](https://leetcode.com/problems/two-sum/)
2. [LeetCode: Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
3. [LeetCode: Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
4. [LeetCode: Maximum Subarray (Kadane's Algorithm)](https://leetcode.com/problems/maximum-subarray/)
5. [LeetCode: Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

Start solving these after understanding the basics!

Happy Learning! 🚀