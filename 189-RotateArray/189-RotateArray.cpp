// Last updated: 03/03/2026, 20:06:43
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        
        k = k % n; // Handle cases where k > n
        if (k == 0) return;

        // Step 1: Reverse the whole vector
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the rest
        reverse(nums.begin() + k, nums.end());
    }
};