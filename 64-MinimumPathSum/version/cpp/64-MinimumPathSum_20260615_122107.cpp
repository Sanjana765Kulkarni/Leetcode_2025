// Last updated: 15/06/2026, 12:21:07
1class Solution {
2public:
3
4    int helper(int m, int n, vector<vector<int>>& a,vector<vector<int>>& memo)
5    {
6        if (m < 0 || n < 0) return 1e9;
7        if (m == 0 && n == 0) return a[0][0];
8        if (memo[m][n] != -1) return memo[m][n];
9
10        int up = helper(m - 1, n, a, memo);
11        int left = helper(m, n - 1, a, memo);
12
13        return memo[m][n] = a[m][n] + min(up, left);
14    }
15    int minPathSum(vector<vector<int>>& a) {
16        
17        int m = a.size();
18        int n = a[0].size();
19        vector<vector<int>> memo(m,vector<int>(n,-1));
20
21        return  helper(m-1,n-1,a,memo);
22        
23    }
24};