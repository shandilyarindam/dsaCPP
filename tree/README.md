# Trees (Interview-Focused)

Trees are one of the **most heavily tested** topics in coding interviews. Expect 1-2 tree questions in almost every round.

This folder covers **Binary Trees**, **Binary Search Trees (BST)**, **AVL Trees**, and **Red-Black Trees** — the core of 95%+ of tree problems.

## Must-Know Concepts for Interviews
- **Node Structure**: data, left, right (and height for AVL, color for Red-Black)
- **Traversals** (asked in every interview):
  - Inorder (L-Root-R) → Sorted order in BST
  - Preorder (Root-L-R) → Copy/tree serialization
  - Postorder (L-R-Root) → Deletion
  - Level Order (BFS) → Queue-based
- **Height & Balance Factor** (crucial for AVL)
- **Rotations** (LL, RR, LR, RL) — key to self-balancing

## Tree Types Covered
- **Binary Tree** → General tree with traversals and common problems
- **Binary Search Tree (BST)** → Fast search/insert/delete (average O(log n))
- **AVL Tree** → Strict self-balancing BST
- **Red-Black Tree** → Relaxed self-balancing BST (used in real-world libraries)

### Drawback of BST Solved by AVL & Red-Black Trees
**Main Drawback of BST**:  
In the worst case (skewed tree — e.g., inserting sorted elements), a BST degenerates into a linked list → **O(n)** time for search/insert/delete instead of O(log n).

**How AVL & Red-Black Trees Solve It**:  
Both are **self-balancing** trees that perform rotations and/or color adjustments after insertions/deletions to keep the tree height bounded:
- **AVL**: Strict balance (|balance factor| ≤ 1) → height ~1.44 log n → slightly faster lookups
- **Red-Black**: Relaxed rules (no two reds adjacent, equal black height) → height ≤ 2 log n → fewer rotations, faster inserts/deletes

**Red-Black vs AVL** (Common Interview Question):
| Aspect               | AVL Tree                       | Red-Black Tree                        |
|----------------------|--------------------------------|---------------------------------------|
| Balance              | Stricter                       | More relaxed                          |
| Height               | Tighter (~1.44 log n)          | Up to 2 log n                         |
| Search               | Slightly faster                | Good                                  |
| Insert/Delete        | More rotations                 | Fewer rotations (faster in practice)  |
| Memory               | Stores height                  | Stores 1-bit color                    |
| Real-World Use       | Lookup-heavy                   | std::map/set (C++), TreeMap (Java)    |

## Key Interview Patterns
- Recursion on subtrees
- DFS (Inorder/Preorder/Postorder)
- BFS (Level order)
- Height-balanced checks
- Lowest Common Ancestor (LCA)
- Path sum problems
- Validation & construction

## Files in This Folder
- `binary_tree.cpp` → All traversals (recursive + iterative), invert, max depth, diameter
- `binary_search_tree.cpp` → Standard BST: insert, search, delete (3 cases), validate, kth smallest
- `avl_tree.cpp` → Self-balancing AVL with insert, all 4 rotations (LL, RR, LR, RL)
- `red_black_tree.cpp` → Red-Black Tree insert with color fixes and rotations

## Top Interview Problems (Prioritized by Frequency)
| Problem                                      | Type           | Difficulty | Why Asked                              |
|----------------------------------------------|----------------|------------|----------------------------------------|
| Invert/Flip Binary Tree                      | BT             | Easy       | Recursion basics                       |
| Maximum Depth of Binary Tree                 | BT             | Easy       | Recursion/DFS                          |
| Binary Tree Level Order Traversal            | BT             | Medium     | BFS with queue                         |
| Validate Binary Search Tree                  | BST            | Medium     | Bounds or inorder check                |
| Lowest Common Ancestor of a Binary Tree      | BT             | Medium     | Classic recursion                      |
| Kth Smallest Element in a BST                | BST            | Medium     | Inorder traversal                      |
| Diameter of Binary Tree                      | BT             | Medium     | Height optimization                    |
| Construct Binary Tree from Preorder & Inorder | BT             | Medium     | Tree construction                      |
| AVL / Red-Black Insertion & Balancing        | AVL / RB       | Hard       | Rotations & balance (rare but high-impact) |

## Pro Tips for Interviews
- Always clarify: "Is the tree balanced?" (affects complexity)
- Master inorder traversal of BST = sorted order
- Use recursion wisely
- For AVL/RB: Be ready to explain rotations and why balancing matters
- Practice both recursive and iterative traversals

These problems + implementations cover **99%** of tree questions in campus/off-campus interviews.

Let's Climb Higher! 🌳🔥

