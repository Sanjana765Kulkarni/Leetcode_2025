// Last updated: 01/08/2026, 23:24:31
class Solution {
public:
    
        
      int helper(int m, int n, vector<vector<int>>& memo) {
        if (m == 1 || n == 1) return 1;
        if (memo[m][n] != -1) return memo[m][n];
        return memo[m][n] = helper(m - 1, n, memo) + helper(m, n - 1, memo);
    }

    int uniquePaths(int m, int n) {
        
        vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));
        return helper(m, n, memo);
    }
        
    
};