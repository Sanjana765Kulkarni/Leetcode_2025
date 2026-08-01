// Last updated: 01/08/2026, 23:25:04
#include <vector>

class Solution {
public:
    // Your binary search logic, updated to accept the vector reference
    int binarySearch(int low, int high, int target, std::vector<int>& nums) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }

    // This exact signature matches what LeetCode is trying to call
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        // Handle empty array edge case safely
        if (nums.empty()) {
            return {-1, -1};
        }

        int low = 0;
        int high = nums.size() - 1; // Vectors use .size() in C++

        int i = binarySearch(low, high, target, nums);

        // If target doesn't exist, return [-1, -1]
        if (i == -1) {
            return {-1, -1};
        }

        int l = i;
        int r = i;

        // Your exact expansion logic with out-of-bounds safety guards
        while (l > 0 && nums[l - 1] == target) {
            l--;
        }

        while (r < nums.size() - 1 && nums[r + 1] == target) {
            r++;
        }

        // Returns a vector containing your left and right boundaries
        return {l, r};
    }
};