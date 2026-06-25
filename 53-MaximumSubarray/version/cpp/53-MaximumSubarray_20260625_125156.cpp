// Last updated: 25/06/2026, 12:51:56
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4
5        int n = nums.size();
6        
7        int sum =0;
8        int maxi = INT_MIN;
9
10        for ( int i = 0; i< n ; i++)
11        {
12            sum = sum + nums[i];
13            maxi = max(maxi, sum);
14            if(sum < 0) sum =0;
15        }
16        return maxi;
17
18
19    }
20};