// Last updated: 03/03/2026, 20:06:27
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];  // mark as seen
            }
        }

        vector<int> missing;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                missing.push_back(i + 1);
            }
        }

        return missing;
    }
};