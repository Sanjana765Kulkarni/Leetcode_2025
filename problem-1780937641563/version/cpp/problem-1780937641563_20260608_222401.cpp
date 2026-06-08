// Last updated: 08/06/2026, 22:24:01
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4
5        int prev1 =0;
6        int prev2 =0;
7        int curr =0;
8
9        for(int num: nums)
10        {
11            curr = max(prev1, prev2+num);
12
13            prev2 = prev1;
14            prev1 = curr;
15
16        }
17
18        return curr;
19        
20    }
21};