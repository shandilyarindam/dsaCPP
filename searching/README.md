# Searching Algorithms

Searching is the process of finding a specific element (target) in a collection of data (usually an array or list).

This section covers the two most fundamental searching algorithms in detail.

## 1. Linear Search
- **Idea**: Check each element one by one from start to end until the target is found or the list ends.
- **When to use**:
  - Array is unsorted
  - Small datasets
  - Only a few elements need to be searched
- **Time Complexity**:
  - Best: O(1) (target at first position)
  - Average & Worst: O(n)
- **Space Complexity**: O(1)
- **Advantages**: Simple, works on unsorted data
- **Disadvantages**: Slow for large datasets

## 2. Binary Search
- **Idea**: Repeatedly divide the search space in half by comparing the middle element.
- **When to use**:
  - Array is **sorted**
  - Large datasets (very efficient)
- **Time Complexity**:
  - Best, Average & Worst: O(log n)
- **Space Complexity**:
  - Iterative: O(1)
  - Recursive: O(log n) due to call stack
- **Advantages**: Extremely fast on sorted data
- **Disadvantages**: Requires sorted array

**Important**: Always sort the array first if using Binary Search!

## Files in This Folder
- `linear_search.cpp` → Implementation of Linear Search with example
- `binary_search.cpp` → Iterative Binary Search (preferred) with example

## Complexity Comparison
| Algorithm       | Time (Best) | Time (Worst) | Space | Requires Sorted? |
|-----------------|-------------|--------------|-------|------------------|
| Linear Search   | O(1)        | O(n)         | O(1)  | No               |
| Binary Search   | O(log n)    | O(log n)     | O(1)  | Yes              |

## Practice Problems (Recommended)
1. [LeetCode: Binary Search](https://leetcode.com/problems/binary-search/)
2. [LeetCode: Search Insert Position](https://leetcode.com/problems/search-insert-position/)
3. [LeetCode: First Bad Version](https://leetcode.com/problems/first-bad-version/)
4. [LeetCode: Find Peak Element](https://leetcode.com/problems/find-peak-element/)

Start with these to master the concepts!

Happy Coding! 🚀