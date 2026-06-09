// Last updated: 09/06/2026, 20:32:45
1class Solution {
2public:
3    int rob2(vector<int> & nums, int start, int end)
4    {
5         int n = nums.size();
6            int prev1 = 0;
7            int prev2 = 0;
8            int curr = 0;
9
10            for(int i = start; i<end; i++)
11            {
12                if(prev1 < prev2+nums[i])
13                {
14                    curr = prev2+nums[i];
15                }
16                if( prev1 > prev2+nums[i])
17                {
18                    curr = prev1;
19                }
20
21                prev2 = prev1;
22                prev1 = curr;
23            }
24        return curr;
25    }
26    int rob(vector<int>& nums) {
27
28        if( nums.size() == 1)
29        {
30            return nums[0];
31        }
32
33        return max(rob2(nums,1,nums.size()), rob2(nums,0,nums.size()-1) );   
34           
35        
36    }
37};