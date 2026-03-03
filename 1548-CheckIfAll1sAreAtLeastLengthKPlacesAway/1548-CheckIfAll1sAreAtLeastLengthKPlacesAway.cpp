// Last updated: 03/03/2026, 20:06:12
class Solution {
public:
    /**
     * Checks if all 1s in the binary array nums are at least k places away from each other.
     * * @param nums The binary array (0s and 1s).
     * @param k The minimum required distance between two 1s.
     * @return true if the condition is met, false otherwise.
     */
    bool kLengthApart(std::vector<int>& nums, int k) {
        // Initialize last_one_index to -1 or a very small number to handle 
        // the first '1' correctly. A large negative number like -k-1 
        // ensures the distance check (i - last_one_index - 1) is initially >= k 
        // for the first '1'.
        int last_one_index = -1; // -1 is simple, we check the distance i - last_one_index
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                // If it's not the very first '1' we've seen (i.e., last_one_index != -1)
                if (last_one_index != -1) {
                    // The distance is the current index (i) minus the index of the 
                    // last '1' (last_one_index). 
                    // The number of zeros *between* them is (i - last_one_index - 1).
                    // The problem requires (i - last_one_index - 1) >= k, 
                    // which is equivalent to i - last_one_index > k.
                    
                    if (i - last_one_index - 1 < k) {
                        return false; // Violation found: distance is less than k
                    }
                }
                
                // Update the index of the last seen '1'
                last_one_index = i;
            }
            // If nums[i] is 0, we just continue the loop without changing last_one_index
        }

        // If the loop completes, no violation was found.
        return true;
    }
};