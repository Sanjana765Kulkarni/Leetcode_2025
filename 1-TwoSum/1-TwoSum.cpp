// Last updated: 01/08/2026, 23:26:06
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        vector <int> res;
        for(int i = 0; i< n; i++)
        {
            int x = target - nums[i];

            for( int j = i+1; j<n; j++)
            {
                if(nums[j] == x)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }

         return res;
        
    }
};