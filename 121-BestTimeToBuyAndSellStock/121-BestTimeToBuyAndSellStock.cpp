// Last updated: 03/03/2026, 20:06:55
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        int n = nums.size();
        int minPrice = INT_MAX;
        for(int i =0;i<n; i++)
        {
            if(minPrice > nums[i])
            {
                minPrice = nums[i];
            }
            profit = max(profit,nums[i]-minPrice);
        }
        
         return profit;
    }
};