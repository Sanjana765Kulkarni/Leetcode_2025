// Last updated: 03/03/2026, 20:06:22
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;
        long long min1 = LLONG_MAX, min2 = LLONG_MAX;

        for (int x : nums) {
            if (x > max1) { max3 = max2; max2 = max1; max1 = x; }
            else if (x > max2) { max3 = max2; max2 = x; }
            else if (x > max3) { max3 = x; }

            if (x < min1) { min2 = min1; min1 = x; }
            else if (x < min2) { min2 = x; }
        }

        long long a = max1 * max2 * max3;
        long long b = max1 * min1 * min2;
        long long ans = max(a, b);
        return (int)ans; // fits in int given constraints, but computed in long long
    }
};