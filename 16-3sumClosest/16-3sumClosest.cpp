// Last updated: 03/03/2026, 20:07:24
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // Initialize best_sum with the sum of the first three (valid since n >= 3)
        int best_sum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int cur = nums[i] + nums[l] + nums[r];
                if (abs(cur - target) < abs(best_sum - target)) {
                    best_sum = cur;
                }
                if (cur == target) {
                    return target; // exact match, can't do better
                } else if (cur < target) {
                    ++l; // need a larger sum
                } else {
                    --r; // need a smaller sum
                }
            }
        }
        return best_sum;
    }
};