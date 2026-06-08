// Last updated: 08/06/2026, 22:09:48
1class Solution {
2public:
3    int climbStairs(int n) {
4
5        if(n <=2)
6        {
7            return n;
8        }
9
10        int prev1 = 2;
11        int prev2 = 1;
12        int curi =0;
13        for(int i = 2; i<n; i++)
14        
15        {
16            curi = prev1 + prev2;
17            prev2 = prev1;
18            prev1 = curi;
19        }
20
21
22        return curi ;
23        
24    }
25};