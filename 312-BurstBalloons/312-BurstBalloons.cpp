// Last updated: 01/08/2026, 23:22:15
class Solution {
public:
    int maxCoins(std::vector<int>& nums) {
        int n = nums.size();
        
       
        std::vector<int> A(n + 2, 1);
        for (int i = 0; i < n; ++i) {
            A[i + 1] = nums[i];
        }

       
        std::vector<std::vector<int>> dp(n + 2, std::vector<int>(n + 2, 0));

      
        for (int len = 1; len <= n; ++len) {
            for (int i = 1; i <= n - len + 1; ++i) {
                int j = i + len - 1; 

               
                for (int k = i; k <= j; ++k) {
                    int coins = A[i - 1] * A[k] * A[j + 1];
                    int total = dp[i][k - 1] + coins + dp[k + 1][j];
                    
                    dp[i][j] = std::max(dp[i][j], total);
                }
            }
        }

        return dp[1][n];
    }
};