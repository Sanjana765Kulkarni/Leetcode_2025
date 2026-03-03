// Last updated: 03/03/2026, 20:05:54
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum = 0;
        for(int x : nums) sum += x;
        return sum % k;
    }
};