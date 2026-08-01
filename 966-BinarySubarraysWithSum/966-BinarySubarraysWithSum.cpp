// Last updated: 01/08/2026, 23:20:48
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

private:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;
        
        int left = 0;
        int sum = 0;
        int count = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            
            // Shrink window if sum exceeds goal
            while (sum > goal) {
                sum -= nums[left];
                left++;
            }
            
            // The number of subarrays ending at 'right' is (right - left + 1)
            count += (right - left + 1);
        }
        
        return count;
    }
};