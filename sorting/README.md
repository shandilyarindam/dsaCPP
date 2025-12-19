# Sorting Algorithms

Sorting is the process of arranging elements in a list or array in a specific order (usually ascending or descending).

This folder covers some of the most important sorting algorithms with clean C++ implementations.

## Algorithms Covered
1. **Bubble Sort**        - Simple comparison-based
2. **Insertion Sort**     - Efficient for small or nearly sorted data
3. **Merge Sort**         - Divide and conquer, stable, O(n log n)
4. **Quick Sort**         - Fast in-place partitioning (planned)
5. **Heap Sort**          - Uses heap data structure (planned)

## Complexity Comparison
| Algorithm         | Time (Best)     | Time (Average) | Time (Worst)   | Space       | Stable? | In-Place? |
|-------------------|-----------------|----------------|----------------|-------------|---------|-----------|
| Bubble Sort       | O(n)            | O(n²)          | O(n²)          | O(1)        | Yes     | Yes       |
| Insertion Sort    | O(n)            | O(n²)          | O(n²)          | O(1)        | Yes     | Yes       |
| Merge Sort        | O(n log n)      | O(n log n)     | O(n log n)     | O(n)        | Yes     | No        |
| Quick Sort        | O(n log n)      | O(n log n)     | O(n²)          | O(log n)    | No      | Yes       |
| Heap Sort         | O(n log n)      | O(n log n)     | O(n log n)     | O(1)        | No      | Yes       |

## When to Use Which?
- **Bubble/Insertion**: Educational, small datasets, or nearly sorted data
- **Merge Sort**: When stability is required, or sorting linked lists
- **Quick Sort**: General-purpose, fast in practice (average case)
- **Heap Sort**: When you need guaranteed O(n log n) and no extra space

## Files in This Folder
- `bubble_sort.cpp`     → Optimized Bubble Sort with early termination
- `selection_sort.cpp`  → Selection Sort (bonus simple algorithm)
- `insertion_sort.cpp`  → Insertion Sort implementation
- `merge_sort.cpp`      → Recursive Merge Sort with merge function
- *(Coming soon)* `quick_sort.cpp` → In-place Quick Sort
- *(Coming soon)* `heap_sort.cpp` → Heap Sort using priority queue/build heap

## Key Concepts
- **In-Place**: Sorts without using extra array (O(1) space)
- **Stable**: Maintains relative order of equal elements
- **Adaptive**: Faster on nearly sorted data (e.g., Insertion, Bubble with flag)

## Practice Problems (Recommended)
1. [LeetCode: Sort Colors (Dutch National Flag)](https://leetcode.com/problems/sort-colors/)
2. [LeetCode: Merge Intervals](https://leetcode.com/problems/merge-intervals/)
3. [LeetCode: Kth Largest Element](https://leetcode.com/problems/kth-largest-element-in-an-array/) (use Heap/QuickSelect)
4. [LeetCode: Sort List (Merge Sort on Linked List)](https://leetcode.com/problems/sort-list/)

Master these algorithms — they are asked **very frequently** in interviews!

Happy Sorting! 🚀