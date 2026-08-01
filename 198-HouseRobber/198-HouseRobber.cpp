// Last updated: 01/08/2026, 23:22:54
class Solution {
public:
    int rob(vector<int>& nums) {

        int prev1 =0;
        int prev2 =0;
        int curr =0;

        for(int num: nums)
        {
            curr = max(prev1, prev2+num);

            prev2 = prev1;
            prev1 = curr;

        }

        return curr;
        
    }
};