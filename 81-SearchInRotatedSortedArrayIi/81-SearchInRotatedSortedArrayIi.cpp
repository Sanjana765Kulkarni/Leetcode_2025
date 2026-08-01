// Last updated: 01/08/2026, 23:24:04
class Solution {
public:
    bool search(vector<int>& nums, int target) {

        sort( nums.begin(), nums.end());

        int low = 0;
        int high = nums.size()-1;

        while(low <= high)
        {
            int mid = low + (high-low)/2;

            if( nums[mid] < target)
            {
                low = mid +1;
            }
            else if( nums[mid] > target)
            {
                high = mid -1;
            }
            else
            {
                return true;
            }

        }

        return false;
        
    }
};