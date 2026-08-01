// Last updated: 01/08/2026, 23:21:44
class Solution {
public:
    int mergeSort(std::vector<int>& nums, int low, int high) {
        if (low >= high) return 0;

        int mid = low + (high - low) / 2;
        int count = mergeSort(nums, low, mid) + mergeSort(nums, mid + 1, high);

        // Count reverse pairs across left [low..mid] and right [mid+1..high]
        int j = mid + 1;
        for (int i = low; i <= mid; ++i) {
            // Cast to long long to prevent integer overflow when multiplying by 2
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge the two sorted halves
        std::inplace_merge(nums.begin() + low, nums.begin() + mid + 1, nums.begin() + high + 1);

        return count;
    }

public:
    int reversePairs(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        return mergeSort(nums, 0, nums.size() - 1);
    }
};