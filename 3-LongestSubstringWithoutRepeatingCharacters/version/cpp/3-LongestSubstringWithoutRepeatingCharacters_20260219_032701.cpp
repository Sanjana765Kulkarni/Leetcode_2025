// Last updated: 19/02/2026, 03:27:01
1#include <string>
2#include <vector>
3#include <algorithm>
4
5using namespace std;
6
7class Solution {
8public:
9    int lengthOfLongestSubstring(string s) {
10        // last index of each ASCII char; -1 if not seen yet
11        vector<int> lastIndex(256, -1);
12        int best = 0;
13        int left = 0; // window is [left, right]
14
15        for (int right = 0; right < (int)s.size(); ++right) {
16            unsigned char c = s[right];
17            // If character was seen inside current window, move left just past it
18            if (lastIndex[c] >= left) {
19                left = lastIndex[c] + 1;
20            }
21            lastIndex[c] = right;
22            best = max(best, right - left + 1);
23        }
24
25        return best;
26    }
27};
28