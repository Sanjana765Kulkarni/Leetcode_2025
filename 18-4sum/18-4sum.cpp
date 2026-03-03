// Last updated: 03/03/2026, 20:07:21
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n < 4) return res;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; ++i) {
            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // Minor pruning: smallest possible sum with nums[i]
            long long min1 = (long long)nums[i] + nums[i+1] + nums[i+2] + nums[i+3];
            if (min1 > target) break; // further i will only increase min1

            // Max possible sum with nums[i]
            long long max1 = (long long)nums[i] + nums[n-1] + nums[n-2] + nums[n-3];
            if (max1 < target) continue; // this i too small, try next i

            for (int j = i + 1; j < n - 2; ++j) {
                // Skip duplicate second elements
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                // Pruning for j
                long long min2 = (long long)nums[i] + nums[j] + nums[j+1] + nums[j+2];
                if (min2 > target) break; // next j will only increase min2

                long long max2 = (long long)nums[i] + nums[j] + nums[n-1] + nums[n-2];
                if (max2 < target) continue; // this j too small, next j

                int l = j + 1;
                int r = n - 1;
                while (l < r) {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        int lv = nums[l], rv = nums[r];
                        while (l < r && nums[l] == lv) ++l;
                        while (l < r && nums[r] == rv) --r;
                    } else if (sum < target) {
                        ++l;
                    } else {
                        --r;
                    }
                }
            }
        }
        return res;
    }
};