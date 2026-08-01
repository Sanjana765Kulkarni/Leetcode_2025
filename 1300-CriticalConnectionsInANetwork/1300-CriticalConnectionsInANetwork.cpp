// Last updated: 01/08/2026, 23:20:29
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    int timer = 0;

    void dfs(int u, int parent, vector<vector<int>>& adj, vector<int>& disc, vector<int>& low, vector<vector<int>>& result) {
        disc[u] = low[u] = timer++;

        for (int v : adj[u]) {
            if (v == parent) continue; // Don't traverse back to the immediate parent

            if (disc[v] != -1) {
                // Back-edge found: update low value of u
                low[u] = min(low[u], disc[v]);
            } else {
                // Forward edge: recurse
                dfs(v, u, adj, disc, low, result);
                
                // On return, update low value of u
                low[u] = min(low[u], low[v]);

                // Check bridge condition
                if (low[v] > disc[u]) {
                    result.push_back({u, v});
                }
            }
        }
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        // Build adjacency list
        vector<vector<int>> adj(n);
        for (const auto& conn : connections) {
            adj[conn[0]].push_back(conn[1]);
            adj[conn[1]].push_back(conn[0]);
        }

        vector<int> disc(n, -1);
        vector<int> low(n, -1);
        vector<vector<int>> result;

        // Graph is fully connected, so a single DFS from node 0 is sufficient
        dfs(0, -1, adj, disc, low, result);

        return result;
    }
};