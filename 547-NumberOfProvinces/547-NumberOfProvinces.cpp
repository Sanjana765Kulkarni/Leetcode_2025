// Last updated: 01/08/2026, 23:21:31
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    void dfs(int start, vector<int>& visited, vector<vector<int>>& isConnected) {
        stack<int> st;
        st.push(start);
        visited[start] = 1; 
        while (!st.empty()) {
            int curr = st.top();
            st.pop();

            for (int neighbor = 0; neighbor < isConnected.size(); neighbor++) {
                if (isConnected[curr][neighbor] == 1 && !visited[neighbor]) {
                    visited[neighbor] = 1;
                    st.push(neighbor);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int count = 0;
        
      
        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++) {
            if (visited[i] == 0) {
                dfs(i, visited, isConnected);
                count++; 
            }
        }

        return count;
    }
};