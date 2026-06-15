// Last updated: 15/06/2026, 12:35:37
1#include <algorithm>
2class Solution {
3public:
4    int minimumTotal(vector<vector<int>>& a) {
5        int m = a.size();
6        //int n = a[0].size();
7
8        for (int i = m - 2; i >= 0; i--) {
9            for (int j = 0; j <= i; j++) {
10                a[i][j] += std::min(a[i+1][j], a[i+1][j+1]);
11            }
12        }
13
14        return a[0][0];
15        
16    }
17};