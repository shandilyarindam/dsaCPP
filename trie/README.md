# Trie (Prefix Tree)

A **Trie** (pronounced "try") is a tree-like data structure used to store a dynamic set of strings where keys are usually strings. It is highly efficient for **prefix-based** operations.

Tries are one of the most **frequently asked** advanced data structures in interviews involving strings.

## Key Features
- Each node represents a character
- Path from root to a node represents a prefix
- Marked end of word with flag

## Operations & Time Complexity
| Operation             | Time Complexity          | Notes                              |
|-----------------------|--------------------------|------------------------------------|
| Insert word           | O(L)                     | L = length of word                 |
| Search word           | O(L)                     | Exact match                        |
| Starts with prefix    | O(P)                     | P = length of prefix               |
| Delete word           | O(L)                     | Optional (complex)                 |

Space: O(total characters across all words)

## Advantages
- Fast prefix searching
- No hash collisions
- Lexicographical order support

## When to Use (Interview Problems)
- Autocomplete / Search suggestions
- Spell checker
- Word search with dictionary
- IP routing (longest prefix match)

## Files in This Folder
- `trie.cpp` → Full implementation with insert, search, startsWith
  - Uses `map<char, TrieNode*>` for flexibility (handles any char)
  - Can be optimized with array[26] for lowercase only

## Must-Do Interview Problems
1. [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) - **Medium (Classic)**
2. [Word Search II](https://leetcode.com/problems/word-search-ii/) - **Hard (Trie + DFS)**
3. [Add and Search Word](https://leetcode.com/problems/add-and-search-word-data-structure-design/) - Supports '.' wildcard
4. [Autocomplete System](https://leetcode.com/problems/design-search-autocomplete-system/)
5. [Longest Word in Dictionary](https://leetcode.com/problems/longest-word-in-dictionary/)

## Pro Tips for Interviews
- Always clarify: lowercase only? Case-sensitive? Special chars?
- Use `bool isEndOfWord` flag
- For optimization: use array[26] instead of map if only lowercase
- Combine with DFS/backtracking for board games (Word Search II)

Tries are a **must-know** for any string-heavy interview!

Happy Prefixing! 🔍🚀