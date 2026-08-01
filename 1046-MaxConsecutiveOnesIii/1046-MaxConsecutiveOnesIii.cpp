// Last updated: 01/08/2026, 23:20:43
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int length = 0;
        int h = k;

        while (r < nums.size())
        {
            if( nums[r] == 1)
            {
                r++;
            }
            else if(nums[r] == 0 && h >0)
            {
                h--;
                r++;
            }
            else if ( nums[r] == 0 && h == 0)
            {
                
                if(nums[l] == 0)
                {
                    h++;
                }
                l++;
            }
            length = max (r-l,length);
        }

        return length;
    }
};