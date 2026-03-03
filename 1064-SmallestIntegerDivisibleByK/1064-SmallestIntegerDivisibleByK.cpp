// Last updated: 03/03/2026, 20:06:17
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        // If k shares factors with 10, impossible
        if (k % 2 == 0 || k % 5 == 0) return -1;

        int rem = 0;
        for (int length = 1; length <= k; length++) {
            rem = (rem * 10 + 1) % k;
            if (rem == 0) return length;
        }
        return -1;
    }
};
