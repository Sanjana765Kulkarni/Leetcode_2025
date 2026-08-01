// Last updated: 01/08/2026, 23:19:15
class Solution {
private:
    int solve(int n, const std::vector<int>& costs, std::vector<int>& memo) {
        // Base case: at ground floor (step 0), total remaining cost is 0
        if (n == 0) return 0;
        
        // Return already computed result
        if (memo[n] != -1) return memo[n];

        int minCost = INT_MAX;

        // Try jumping 1, 2, or 3 steps down
        for (int i = 1; i <= 3; ++i) {
            if (n - i >= 0) {
                // Adjust index to (n - 1) for 0-indexed costs array
                int currentCost = costs[n - 1] + (i * i) + solve(n - i, costs, memo);
                minCost = std::min(minCost, currentCost);
            }
        }

        return memo[n] = minCost;
    }

public:
    int climbStairs(int n, std::vector<int>& costs) {
        std::vector<int> memo(n + 1, -1);
        return solve(n, costs, memo);
    }
};