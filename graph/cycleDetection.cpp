#include <bits/stdc++.h>
using namespace std;

class CycleDetection {
public:
    // Cycle in Undirected Graph (DFS with parent)
    bool dfsUndirected(int node, int parent, vector<bool>& visited, const vector<vector<int>>& adj) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (dfsUndirected(neighbor, node, visited, adj)) return true;
            } else if (neighbor != parent) {
                return true;  // Back edge
            }
        }
        return false;
    }

    bool hasCycleUndirected(const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfsUndirected(i, -1, visited, adj)) return true;
            }
        }
        return false;
    }

    // Cycle in Directed Graph (DFS with recursion stack)
    bool dfsDirected(int node, vector<bool>& visited, vector<bool>& recStack, const vector<vector<int>>& adj) {
        visited[node] = true;
        recStack[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (dfsDirected(neighbor, visited, recStack, adj)) return true;
            } else if (recStack[neighbor]) {
                return true;  // Back edge in same path
            }
        }
        recStack[node] = false;
        return false;
    }

    bool hasCycleDirected(const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfsDirected(i, visited, recStack, adj)) return true;
            }
        }
        return false;
    }
};

int main() {
    // Undirected with cycle
    vector<vector<int>> undirected = {{1}, {0, 2}, {1}};
    CycleDetection cd;
    cout << "Undirected Cycle: " << (cd.hasCycleUndirected(undirected) ? "Yes" : "No") << endl;

    // Directed with cycle
    vector<vector<int>> directed = {{1}, {2}, {0}};
    cout << "Directed Cycle: " << (cd.hasCycleDirected(directed) ? "Yes" : "No") << endl;

    return 0;
}