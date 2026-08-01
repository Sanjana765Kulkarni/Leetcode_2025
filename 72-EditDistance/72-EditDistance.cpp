// Last updated: 01/08/2026, 23:24:16
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minDistance(std::string word1, std::string word2) {
        int m = word1.length();
        int n = word2.length();

       
        vector<int> dp(n + 1, 0);

        for (int j = 0; j <= n; ++j) {
            dp[j] = j;
        }

        for (int i = 1; i <= m; ++i) {
            int prev_diagonal = dp[0]; 
            dp[0] = i;                

            for (int j = 1; j <= n; ++j) {
                int temp = dp[j]; 

                if (word1[i - 1] == word2[j - 1]) {
                    
                    dp[j] = prev_diagonal;
                } else {
                    
                    int replace_op = prev_diagonal;
                    int delete_op  = dp[j];      
                    int insert_op  = dp[j - 1];  

                    dp[j] = 1 + std::min({replace_op, delete_op, insert_op});
                }

                prev_diagonal = temp; 
            }
        }

        return dp[n];
    }
};