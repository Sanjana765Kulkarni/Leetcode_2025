// Last updated: 03/03/2026, 20:07:32
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        // dp[i][j] = -1 (unknown), 0 (false), 1 (true)
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        function<bool(int,int)> solve = [&](int i, int j) -> bool {
            // If already computed
            if (dp[i][j] != -1) return dp[i][j];

            // If pattern is finished, string must also be finished
            if (j == m) return dp[i][j] = (i == n);

            // Check if first character matches
            bool firstMatch = (i < n) && (p[j] == s[i] || p[j] == '.');

            // If next char is '*', two options:
            // 1) Skip "p[j]*" entirely -> solve(i, j+2)
            // 2) If firstMatch, consume one char from s -> solve(i+1, j)
            if (j + 1 < m && p[j + 1] == '*') {
                bool res = solve(i, j + 2) || (firstMatch && solve(i + 1, j));
                return dp[i][j] = res;
            } else {
                // No '*', we must match this char and move both pointers
                if (firstMatch) {
                    bool res = solve(i + 1, j + 1);
                    return dp[i][j] = res;
                } else {
                    return dp[i][j] = false;
                }
            }
        };

        return solve(0, 0);
    }
};
