// Last updated: 03/03/2026, 20:06:09
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int sz = nums.size();
        // expected size is 2 * n
        if (sz != 2 * n) {
            return {}; // return empty vector on invalid input
        }

        vector<int> res(sz);
        for (int i = 0; i < n; ++i) {
            res[2 * i]     = nums[i];     // take from first half
            res[2 * i + 1] = nums[n + i]; // take from second half
        }
        return res;
    }
};
