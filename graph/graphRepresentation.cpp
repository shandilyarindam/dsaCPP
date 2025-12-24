#include <bits/stdc++.h>
using namespace std;

// Adjacency List (Preferred - O(V + E) space)
vector<vector<int>> adjList(int V) {
    vector<vector<int>> adj(V);
    // Example: Undirected graph
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    return adj;
}

// Adjacency Matrix (O(V²) space - use only for small V)
vector<vector<bool>> adjMatrix(int V) {
    vector<vector<bool>> adj(V, vector<bool>(V, false));
    // Example: Undirected
    adj[0][1] = adj[1][0] = true;
    adj[0][2] = adj[2][0] = true;
    adj[1][2] = adj[2][1] = true;
    adj[2][3] = adj[3][2] = true;
    return adj;
}

int main() {
    int V = 4;
    auto list = adjList(V);
    cout << "Adjacency List:\n";
    for (int i = 0; i < V; i++) {
        cout << i << ": ";
        for (int neighbor : list[i]) cout << neighbor << " ";
        cout << endl;
    }

    return 0;
}