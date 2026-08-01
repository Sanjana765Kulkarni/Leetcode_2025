// Last updated: 01/08/2026, 23:22:19
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i =0; i< nums.size(); i++)
        {
            if(nums[i] == nums[i+1])
            {
                return nums[i];
            }
        }
        return -1;
        
    }
};