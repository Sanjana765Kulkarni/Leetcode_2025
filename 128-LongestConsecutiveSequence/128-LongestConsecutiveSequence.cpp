// Last updated: 01/08/2026, 23:23:33
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int consec = 1;
        int max_size = 1;

        for( int i = 0; i< nums.size()-1; i++)
        {
            if(nums[i] + 1 == nums[i+1])
            {
                consec++;
                max_size = max ( max_size,consec);
            }
            else if( nums[i] == nums[i+1])
            {
                continue;
            }
            else
            {
                consec = 1;
            }
        }

        return max_size;
        
    }
};