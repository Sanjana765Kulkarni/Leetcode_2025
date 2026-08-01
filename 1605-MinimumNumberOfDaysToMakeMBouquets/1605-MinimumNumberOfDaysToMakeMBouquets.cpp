// Last updated: 01/08/2026, 23:20:13
#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    int minDays(std::vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        // Prevent potential 32-bit integer overflow during m * k
        if (static_cast<long long>(m) * k > n) {
            return -1;
        }

        auto canMake = [&](int day) -> bool {
            int bouquets = 0;
            int flowers = 0;

            for (int bloom : bloomDay) {
                if (bloom <= day) {
                    flowers++;
                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0; // Break adjacency chain
                }
            }
            return bouquets >= m;
        };

        // Find min and max bloom days
        auto [minIt, maxIt] = std::minmax_element(bloomDay.begin(), bloomDay.end());
        int low = *minIt;
        int high = *maxIt;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canMake(mid)) {
                ans = mid;
                high = mid - 1; // Try to find an earlier valid day
            } else {
                low = mid + 1;  // Need more days
            }
        }

        return ans;
    }
};