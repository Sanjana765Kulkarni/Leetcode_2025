// Last updated: 03/03/2026, 20:07:46
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // last index of each ASCII char; -1 if not seen yet
        vector<int> lastIndex(256, -1);
        int best = 0;
        int left = 0; // window is [left, right]

        for (int right = 0; right < (int)s.size(); ++right) {
            unsigned char c = s[right];
            // If character was seen inside current window, move left just past it
            if (lastIndex[c] >= left) {
                left = lastIndex[c] + 1;
            }
            lastIndex[c] = right;
            best = max(best, right - left + 1);
        }

        return best;
    }
};
