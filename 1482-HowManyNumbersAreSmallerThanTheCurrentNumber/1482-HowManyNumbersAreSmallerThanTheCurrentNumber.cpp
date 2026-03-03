// Last updated: 03/03/2026, 20:06:14
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(101, 0);

        // Count frequency of each number
        for(int n : nums) freq[n]++;

        // Prefix sum so freq[i] = numbers smaller than i
        for(int i = 1; i < 101; i++){
            freq[i] += freq[i - 1];
        }

        vector<int> ans;
        ans.reserve(nums.size());

        // Build result
        for(int n : nums){
            if(n == 0) ans.push_back(0);
            else ans.push_back(freq[n - 1]);
        }

        return ans;
    }
};
