#include <bits/stdc++.h>
using namespace std;

class GraphTraversal {
public:
    // BFS - Shortest path in unweighted graph
    void bfs(int start, const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        queue<int> q;
        q.push(start);
        visited[start] = true;

        cout << "BFS: ";
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    // DFS Recursive
    void dfsRecursive(int node, vector<bool>& visited, const vector<vector<int>>& adj) {
        visited[node] = true;
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfsRecursive(neighbor, visited, adj);
            }
        }
    }

    // DFS Iterative (using stack)
    void dfsIterative(int start, const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        stack<int> s;
        s.push(start);

        cout << "DFS Iterative: ";
        while (!s.empty()) {
            int node = s.top();
            s.pop();

            if (!visited[node]) {
                visited[node] = true;
                cout << node << " ";

                // Push neighbors in reverse to match recursive order
                for (auto it = adj[node].rbegin(); it != adj[node].rend(); ++it) {
                    if (!visited[*it]) {
                        s.push(*it);
                    }
                }
            }
        }
        cout << endl;
    }

    void runDFSRecursive(int start, const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        cout << "DFS Recursive: ";
        dfsRecursive(start, visited, adj);
        cout << endl;
    }
};

int main() {
    int V = 4;
    vector<vector<int>> adj = {
        {1, 2},    // 0
        {0, 2},    // 1
        {0, 1, 3}, // 2
        {2}        // 3
    };

    GraphTraversal gt;
    gt.bfs(0, adj);
    gt.runDFSRecursive(0, adj);
    gt.dfsIterative(0, adj);

    return 0;
}