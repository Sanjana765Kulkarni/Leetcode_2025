// Last updated: 13/08/2026, 00:29:58
1class Solution {
2public:
3    bool isMatch(string s, string p) {
4        int si = 0, pi = 0, match = 0, star = -1;
5        int sn = s.length(), pn = p.length();
6        while (si < sn) {
7            if (pi < pn && (p[pi] == '?' || p[pi] == s[si])) {
8                si++;
9                pi++;
10            } else if (pi < pn && p[pi] == '*') {
11                star = pi;
12                match = si;
13                pi++;
14            } else if (star != -1) {
15                pi = star + 1;
16                match++;
17                si = match;
18            } else {
19                return false;
20            }
21        }
22        while (pi < pn && p[pi] == '*') {
23            pi++;
24        }
25        return pi == pn;
26    }
27};