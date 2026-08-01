// Last updated: 01/08/2026, 23:19:53
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int less= INT_MAX;
        for(int i =0; i<n; i++)
        {
            if(nums[i] == target)
            {
                if(abs(i-start)< less)
                {
                    less = abs(i-start);
                }
            }
        }

        return less;
        
    }
};