// Last updated: 16/06/2026, 11:50:06
1class Solution {
2public:
3    int helper(int n, int k, vector<int>&nums, vector<vector<int>>&memo)
4    {
5        //Edge Cases
6        if(k == 0) return true;
7        if( n == 0) return nums[0] == k;
8        if(memo[n][k] != -1) return memo[n][k];
9
10        //recursive Cases
11        bool NotTaken = helper(n-1, k, nums, memo);
12
13        bool Taken = false;
14        if(nums[n] <= k)
15            Taken = helper(n-1,k-nums[n],nums, memo);
16        
17        return memo[n][k] = NotTaken || Taken;
18
19    }
20    bool canPartition(vector<int>& nums) {
21
22        int n = nums.size();
23
24        int sum = 0;
25        for (int i = 0; i< n; i++)
26        {
27            sum += nums[i];
28        }
29
30        if( sum % 2 == 1) return false;
31        else
32        {
33            int k = sum/2;
34            vector<vector<int>>memo (n,vector<int>(k+1,-1));
35            return helper(n-1,k,nums,memo);
36        }
37        
38    }
39};