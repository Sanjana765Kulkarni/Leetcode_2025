// Last updated: 01/08/2026, 23:22:49
class Solution {
public:
    bool hasCycle(int node, vector<vector<int>>& adj, vector<int>& state) {
        if (state[node] == 1) return true;  
        if (state[node] == 2) return false; 

        state[node] = 1; 
        for (int neighbor : adj[node]) {
            if (hasCycle(neighbor, adj, state)) return true;
        }
        
        state[node] = 2; 
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto& edge : prerequisites) {
            adj[edge[1]].push_back(edge[0]);
        }

        // 0 = Unvisited, 1 = Visiting, 2 = Visited
        vector<int> state(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            if (state[i] == 0) {
                if (hasCycle(i, adj, state)) return false;
            }
        }
        return true;
    }
};