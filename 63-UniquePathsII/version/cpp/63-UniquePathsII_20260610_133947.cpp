// Last updated: 10/06/2026, 13:39:47
1class Solution {
2public:
3    int uniquePathsWithObstacles(vector<vector<int>>& a) {
4        int n = a.size();
5        int m = a[0].size();
6
7       
8        if (a[0][0] == 1 || a[n-1][m-1] == 1) return 0;
9        vector<vector<long long>> dp(n, vector<long long>(m, 0));
10        dp[0][0] = 1; 
11
12        for (int i = 0; i < n; i++) {
13            for (int j = 0; j < m; j++) {
14                
15                if (i == 0 && j == 0) continue;
16
17                
18                if (a[i][j] == 1) {
19                    dp[i][j] = 0;
20                } else {
21                    long long up = 0;
22                    long long left = 0;
23
24                    
25                    if (i > 0) up = dp[i-1][j];
26                    if (j > 0) left = dp[i][j-1];
27
28                    dp[i][j] = up + left;
29                }
30            }
31        }
32        
33        return dp[n-1][m-1];
34        
35    }
36};