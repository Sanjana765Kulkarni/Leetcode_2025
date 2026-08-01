// Last updated: 01/08/2026, 23:24:23
class Solution {
public:

    int helper(int m, int n, vector<vector<int>>& a,vector<vector<int>>& memo)
    {
        if (m < 0 || n < 0) return 1e9;
        if (m == 0 && n == 0) return a[0][0];
        if (memo[m][n] != -1) return memo[m][n];

        int up = helper(m - 1, n, a, memo);
        int left = helper(m, n - 1, a, memo);

        return memo[m][n] = a[m][n] + min(up, left);
    }
    int minPathSum(vector<vector<int>>& a) {
        
        int m = a.size();
        int n = a[0].size();
        vector<vector<int>> memo(m,vector<int>(n,-1));

        return  helper(m-1,n-1,a,memo);
        
    }
};