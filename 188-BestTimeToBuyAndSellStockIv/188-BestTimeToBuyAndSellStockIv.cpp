// Last updated: 01/08/2026, 23:23:04
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        //int profit = 0;
        int n = prices.size();
        if ( n == 0 || k ==0) return 0;
        vector<int> buy (k+1,-(1e9));
        vector<int> sell (k+1,0);

        for(int price:prices){
            for( int t = 1; t<=k; t++)
            {
                buy[t] = max(buy[t],(sell[t-1]-price));
                sell[t] = max ( sell[t],buy[t]+price);

            }
        }
        return sell[k];
    
    }
};