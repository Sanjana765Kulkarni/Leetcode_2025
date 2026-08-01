// Last updated: 01/08/2026, 23:25:07
class Solution {
public:
    int BS(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        // BUG FIX 1: Standard loop condition
        while(low <= high) 
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        
        return -1; // Move outside the loop
    }

    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;

        // 1. Find the index of the minimum element
        int min_it = min_element(nums.begin(), nums.end()) - nums.begin();
        int n = nums.size();

        // 2. Sort the array to allow binary search
        sort(nums.begin(), nums.end());

        // 3. Find the target in the sorted array
        int i = BS(nums, target);

        // If element doesn't exist, return -1
        if (i == -1) return -1;

        // BUG FIX 2: Correct circular index mapping logic
        return (i + min_it) % n;
    }
};