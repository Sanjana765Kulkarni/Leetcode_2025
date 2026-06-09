// Last updated: 09/06/2026, 20:45:53
1class Solution {
2public:
3    
4        
5      int helper(int m, int n, vector<vector<int>>& memo) {
6        if (m == 1 || n == 1) return 1;
7        if (memo[m][n] != -1) return memo[m][n];
8        return memo[m][n] = helper(m - 1, n, memo) + helper(m, n - 1, memo);
9    }
10
11    int uniquePaths(int m, int n) {
12        
13        vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));
14        return helper(m, n, memo);
15    }
16        
17    
18};