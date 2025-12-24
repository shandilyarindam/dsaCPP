# Graph

A **Graph** is a non-linear data structure consisting of vertices (nodes) and edges (connections). Graphs model real-world relationships (social networks, roads, dependencies).

This folder covers **core interview topics**: representation, BFS, DFS, cycle detection, and topological sort.

## Key Concepts
- **Directed vs Undirected**
- **Weighted vs Unweighted**
- **Cyclic vs Acyclic** (important for topological sort)

## Representation (Most Asked)
- **Adjacency List** → vector<vector<int>> (preferred — O(V + E) space)
- **Adjacency Matrix** → vector<vector<bool>> (O(V²) space — rarely used except small V)

## Core Algorithms & Time Complexity
| Algorithm             | Time Complexity | Space | Use Case                           |
|-----------------------|-----------------|-------|------------------------------------|
| BFS                   | O(V + E)        | O(V)  | Shortest path (unweighted), level order |
| DFS                   | O(V + E)        | O(V)  | Cycle detection, topological sort |
| Cycle Detection       | O(V + E)        | O(V)  | Directed (DFS), Undirected (parent check) |
| Topological Sort      | O(V + E)        | O(V)  | DAG only (course schedule, tasks)  |

## Files in This Folder
- `graph_representation.cpp` → Adjacency list & matrix examples
- `bfs_dfs.cpp` → BFS (queue) + DFS (recursive + iterative)
- `cycle_detection.cpp` → Cycle in directed & undirected graphs
- `topological_sort.cpp` → Kahn's algorithm (BFS) + DFS-based

## Must-Do Interview Problems
1. [Number of Islands](https://leetcode.com/problems/number-of-islands/) - DFS/BFS on grid
2. [Clone Graph](https://leetcode.com/problems/clone-graph/) - DFS with map
3. [Course Schedule](https://leetcode.com/problems/course-schedule/) - Cycle detection + Topological Sort
4. [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) - Topological Sort
5. [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) - BFS multi-source
6. [Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) - BFS
7. [Word Ladder](https://leetcode.com/problems/word-ladder/) - BFS on words

## Pro Tips for Interviews
- Always ask: "Directed or undirected?" "Weighted?" "Multiple edges?"
- Use **visited array** to avoid revisiting
- For cycle in undirected: track **parent** node
- For topological sort: Kahn's (indegree) is easier to explain
- BFS for shortest path in unweighted graph
- Grid problems = graph problems (4 or 8 directions)

Graphs are **guaranteed** in every serious interview — master BFS/DFS first!

Let's Connect! 🌐🚀