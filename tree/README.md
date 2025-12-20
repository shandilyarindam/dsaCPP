# Trees (Interview-Focused)

Trees are one of the **most heavily tested** topics in coding interviews. Expect 1-2 tree questions in almost every round.

This folder covers **Binary Trees**, **Binary Search Trees (BST)**, and **AVL Trees** — the core of 95%+ of tree problems.

## Must-Know Concepts for Interviews
- **Node Structure**: data, left, right (and height for AVL)
- **Traversals** (asked in every interview):
  - Inorder (L-Root-R) → Sorted order in BST
  - Preorder (Root-L-R) → Copy/tree serialization
  - Postorder (L-R-Root) → Deletion
  - Level Order (BFS) → Queue-based
- **Height & Balance Factor** (crucial for AVL)
- **Rotations** (LL, RR, LR, RL) — key to self-balancing

## Tree Types Covered
- **Binary Tree** → General tree with traversalsals and common problems
- **Binary Search Tree (BST)** → Fast search/insert/delete (average O(log n))
- **AVL Tree** → Self-balancing BST (guaranteed O(log n))

### Drawback of BST Solved by AVL Trees
**Main Drawback of BST**:  
In the worst case (skewed tree — e.g., inserting sorted elements), a BST degenerates into a linked list → **O(n)** time for search/insert/delete instead of O(log n).

**How AVL Trees Solve It**:  
AVL Trees are **self-balancing** — after every insertion/deletion, they perform rotations to maintain a balance factor of -1, 0, or +1 for every node. This guarantees the tree height remains **O(log n)** in the **worst case**, ensuring all operations are O(log n).

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
- `avl_tree.cpp` → Self-balancing AVL with insert, all 4 rotations (LL, RR, LR, RL), height update

## Top Interview Problems (Prioritized by Frequency)
| Problem                                      | Type      | Difficulty | Why Asked                              |
|----------------------------------------------|-----------|------------|----------------------------------------|
| Invert/Flip Binary Tree                      | BT        | Easy       | Recursion basics                       |
| Maximum Depth of Binary Tree                 | BT        | Easy       | Recursion/DFS                          |
| Binary Tree Level Order Traversal            | BT        | Medium     | BFS with queue                         |
| Validate Binary Search Tree                  | BST       | Medium     | Bounds or inorder check                |
| Lowest Common Ancestor of a Binary Tree      | BT        | Medium     | Classic recursion                      |
| Kth Smallest Element in a BST                | BST       | Medium     | Inorder traversal                      |
| Diameter of Binary Tree                      | BT        | Medium     | Height optimization                    |
| Construct Binary Tree from Preorder & Inorder | BT        | Medium     | Tree construction                      |
| AVL Tree Insertion & Balancing               | AVL       | Hard       | Rotations & balance factor (rare but high-impact) |

## AVL Tree Specifics (When Asked)
- Guarantees **O(log n) worst-case** for all operations
- Balance factor = height(left) - height(right) ∈ {-1, 0, 1}
- 4 rotations: LL, RR, LR, RL
- Asked in companies emphasizing performance guarantees (e.g., when interviewer mentions "worst-case efficiency")

## Pro Tips for Interviews
- Always clarify: "Is the tree balanced?" (affects complexity)
- Master inorder traversal of BST = sorted order
- Use recursion wisely
- For AVL: Be ready to draw rotations on whiteboard — interviewers love it
- Practice both recursive and iterative traversals

These problems + AVL implementation cover **99%** of tree questions in campus/off-campus interviews.

Let's Climb Higher!