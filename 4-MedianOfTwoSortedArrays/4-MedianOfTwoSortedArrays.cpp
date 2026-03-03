// Last updated: 03/03/2026, 20:07:45
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;

        // Merge both arrays
        for (int x : nums1) nums.push_back(x);
        for (int x : nums2) nums.push_back(x);

        // Sort the merged array
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // If even number of elements → average of middle two
        if (n % 2 == 0)
            return (nums[n/2 - 1] + nums[n/2]) / 2.0;

        // If odd number of elements → middle element
        return nums[n/2];
    }
};