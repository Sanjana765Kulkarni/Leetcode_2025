// Last updated: 03/03/2026, 20:06:34
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        
        // Step 1: Move all non-zero elements to the front
        for (int cur = 0; cur < nums.size(); cur++) {
            if (nums[cur] != 0) {
                nums[lastNonZeroFoundAt++] = nums[cur];
            }
        }
        
        // Step 2: Fill the remaining space with zeros
        for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};