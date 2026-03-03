// Last updated: 03/03/2026, 20:06:08
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int x : nums) {
            total += x;
        }

        int rem = total % p;
        if (rem == 0) return 0;  // already divisible

        int n = nums.size();
        unordered_map<int, int> lastIndex;
        lastIndex.reserve(n * 2);
        lastIndex.max_load_factor(0.7);

        // prefix mod value 0 is at index -1 (before the array starts)
        lastIndex[0] = -1;

        long long prefix = 0;
        int ans = n; // start with impossible large length

        for (int i = 0; i < n; ++i) {
            prefix = (prefix + nums[i]) % p;
            int cur = (int)prefix;

            // we want prefix[j] == (cur - rem) mod p
            int target = (cur - rem + p) % p;

            if (lastIndex.find(target) != lastIndex.end()) {
                int j = lastIndex[target];
                ans = min(ans, i - j);
            }

            // update last index for this prefix mod
            lastIndex[cur] = i;
        }

        // If we have to remove whole array => not allowed
        return (ans == n) ? -1 : ans;
    }
};
