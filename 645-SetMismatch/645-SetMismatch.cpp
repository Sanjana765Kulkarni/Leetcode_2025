// Last updated: 03/03/2026, 20:06:21
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Returns {duplicate, missing}
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n + 1, 0);
        int duplicate = -1;
        int missing = -1;

        // Count occurrences and detect duplicate
        for (int x : nums) {
            cnt[x]++;
            if (cnt[x] == 2) duplicate = x;
        }

        // Find the missing number (count == 0)
        for (int i = 1; i <= n; ++i) {
            if (cnt[i] == 0) {
                missing = i;
                break;
            }
        }

        return {duplicate, missing};
    }
};