// Last updated: 01/08/2026, 23:23:13
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // vector<int> arr;
        // arr.push_back(INT_MIN);
        // arr.insert(arr.end(),nums.begin(), nums.end());
        // arr.push_back(INT_MIN);

        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;

        while( low < high)
        {
            mid = low + (high-low)/2;

            if( nums[mid] > nums[mid+1] )
            {
                high = mid;
            }
            else 
            {
                low = mid+1;
            }

        }

        return low;
        
    }
};