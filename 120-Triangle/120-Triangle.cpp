// Last updated: 01/08/2026, 23:23:45
#include <algorithm>
class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
        int m = a.size();
        //int n = a[0].size();

        for (int i = m - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                a[i][j] += std::min(a[i+1][j], a[i+1][j+1]);
            }
        }

        return a[0][0];
        
    }
};