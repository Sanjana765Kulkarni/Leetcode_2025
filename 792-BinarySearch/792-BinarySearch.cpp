// Last updated: 03/03/2026, 20:06:20
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        if( n == 0)
        {return -1;}
        if (n == 1)
        {
            if(target == nums[0])
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int high, low, mid;
        low = 0;
        high = n-1;

        while ( low <= high)
        {
            mid = (low + high)/2;
            if( target < nums[mid])
            {
                high = mid -1;
            }

            else{
                if( target > nums[mid])
                {
                    low = mid+1;
                }

                else
                {
                    return mid;
                }
            }
            
        }
        return -1;
    }
    
};