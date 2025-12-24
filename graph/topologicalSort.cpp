#include <bits/stdc++.h>
using namespace std;

class TopologicalSort {
public:
    // Kahn's Algorithm (BFS - using indegree)
    vector<int> kahn(const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> indegree(V, 0);
        for (int i = 0; i < V; i++) {
            for (int neighbor : adj[i]) {
                indegree[neighbor]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for (int neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) q.push(neighbor);
            }
        }

        // If topo.size() != V → cycle exists
        return topo;
    }

    // DFS-Based Topological Sort
    void dfs(int node, vector<bool>& visited, stack<int>& st, const vector<vector<int>>& adj) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, visited, st, adj);
            }
        }
        st.push(node);
    }

    vector<int> dfsTopo(const vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        stack<int> st;

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, visited, st, adj);
            }
        }

        vector<int> topo;
        while (!st.empty()) {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }
};

int main() {
    // DAG example: 0→1, 0→2, 1→3, 2→3
    vector<vector<int>> adj = {{1,2}, {3}, {3}, {}};

    TopologicalSort ts;
    vector<int> kahnOrder = ts.kahn(adj);
    cout << "Kahn's Topo: ";
    for (int node : kahnOrder) cout << node << " ";
    cout << endl;

    vector<int> dfsOrder = ts.dfsTopo(adj);
    cout << "DFS Topo: ";
    for (int node : dfsOrder) cout << node << " ";
    cout << endl;

    return 0;
}