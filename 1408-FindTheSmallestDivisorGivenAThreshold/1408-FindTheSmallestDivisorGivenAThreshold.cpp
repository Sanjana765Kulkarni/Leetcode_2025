// Last updated: 01/08/2026, 23:20:26
class Solution {
public:
    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int low = 1;
        int high = *std::max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Calculate the ceiling division sum using integer arithmetic
            long long current_sum = 0;
            for (int num : nums) {
                current_sum += (num + mid - 1) / mid;
            }

            if (current_sum <= threshold) {
                ans = mid;       // Valid candidate, try to find a smaller one
                high = mid - 1;  // Search in left half
            } else {
                low = mid + 1;   // Sum too big, need a larger divisor
            }
        }

        return ans;
    }
};