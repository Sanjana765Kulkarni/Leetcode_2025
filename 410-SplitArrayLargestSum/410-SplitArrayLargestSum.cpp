// Last updated: 01/08/2026, 23:21:58
class Solution 
{
public:
    int countPartitions(const vector<int>& a, int maxSum) {
        int partitions = 1; // Start with at least 1 partition
        long long subarraySum = 0; // Prevent overflow during summation

        for (int num : a) {
            if (subarraySum + num <= maxSum) {
                subarraySum += num;
            } else {
                partitions++;
                subarraySum = num;
            }
        }
        return partitions;
    }

    int splitArray(const vector<int>& a, int k) {
        if (a.empty()) return 0;

        // Correct algorithm usage to get max element and total sum
        int low = *max_element(a.begin(), a.end());
        long long high = accumulate(a.begin(), a.end(), 0LL);

        long long result = low;

        // Binary search for the minimum possible largest subarray sum
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            int partitions = countPartitions(a, mid);

            if (partitions > k) {
                // Too many partitions needed; we need a larger maxSum
                low = mid + 1;
            } else {
                // Valid partition count; try to minimize the maxSum further
                result = mid;
                high = mid - 1;
            }
        }
        return result;
    }
};