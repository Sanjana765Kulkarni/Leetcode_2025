// Last updated: 03/03/2026, 20:07:42
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = (int)s.size();
        if (n < 2) return s;

        int bestStart = 0;
        int bestLen = 1;

        for (int center = 0; center < n; ++center) {
            // odd-length palindromes (centered at center)
            expand(s, center, center, bestStart, bestLen);
            // even-length palindromes (centered between center and center+1)
            expand(s, center, center + 1, bestStart, bestLen);
        }

        return s.substr(bestStart, bestLen);
    }

private:
    // Try to expand from (L,R), update bestStart & bestLen if we find a longer palindrome
    void expand(const string &s, int L, int R, int &bestStart, int &bestLen) {
        int n = (int)s.size();
        while (L >= 0 && R < n && s[L] == s[R]) {
            int len = R - L + 1;
            if (len > bestLen) {
                bestLen = len;
                bestStart = L;
            }
            --L;
            ++R;
        }
    }
};
