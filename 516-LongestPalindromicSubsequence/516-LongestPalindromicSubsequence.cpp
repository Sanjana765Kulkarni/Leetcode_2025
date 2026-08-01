// Last updated: 01/08/2026, 23:21:40
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int longestPalindromeSubseq(std::string s) {
        int n = s.length();
        
       
        std::vector<int> memo(n, 0);

        
        for (int i = n - 1; i >= 0; --i) {
            memo[i] = 1; 
            int prev_diagonal = 0; 
            for (int j = i + 1; j < n; ++j) {
                int temp = memo[j]; 

                if (s[i] == s[j]) {
                   
                    memo[j] = 2 + prev_diagonal;
                } else {
                    
                    memo[j] = std::max(memo[j], memo[j - 1]);
                }

                prev_diagonal = temp; 
            }
        }

        return memo[n - 1]; 
    }
};