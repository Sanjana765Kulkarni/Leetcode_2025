// Last updated: 01/08/2026, 23:23:41
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        int n = prices.size();
        for ( int i = 0; i< n; i++)
    {
        if( prices[i] < buy)
        {
            buy = prices[i];
        }
        else
        {
            profit = profit + prices[i] - buy;
            buy = prices[i];
        }

    }
    return profit;
        
    }
};