// Last updated: 01/08/2026, 23:21:05
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        // memo making
        cost.push_back(0);
        vector<int> memo(cost.size(),-1);
        int step = cost.size()-1;
        return solve(step, cost, memo);
        
    }

    int solve( int step, vector<int>& cost, vector<int>& memo )
    {
        // base case
        if(step ==0) return cost[0];
        if( step ==1) return cost[1];
        if(memo[step] != -1) return memo[step];

        // condition
        int minPrices = INT_MAX;

        for(int i = 1; i<3; i++)
        {   if(step-i >=0)
            {
                int currentCost = cost[step] + solve(step-i, cost, memo);
                minPrices = min(minPrices, currentCost);
            }
        }

        return memo[step] = minPrices;
    }
};