// Last updated: 01/08/2026, 23:22:46
class Solution {
public:
    int rob2(vector<int> & nums, int start, int end)
    {
         int n = nums.size();
            int prev1 = 0;
            int prev2 = 0;
            int curr = 0;

            for(int i = start; i<end; i++)
            {
                if(prev1 < prev2+nums[i])
                {
                    curr = prev2+nums[i];
                }
                if( prev1 > prev2+nums[i])
                {
                    curr = prev1;
                }

                prev2 = prev1;
                prev1 = curr;
            }
        return curr;
    }
    int rob(vector<int>& nums) {

        if( nums.size() == 1)
        {
            return nums[0];
        }

        return max(rob2(nums,1,nums.size()), rob2(nums,0,nums.size()-1) );   
           
        
    }
};