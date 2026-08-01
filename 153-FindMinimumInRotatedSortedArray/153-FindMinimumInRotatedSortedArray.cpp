// Last updated: 01/08/2026, 23:23:16
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int mini = *min_element(nums.begin(), nums.end());
        return mini;
        
    }
};