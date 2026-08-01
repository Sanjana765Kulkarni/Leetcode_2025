// Last updated: 01/08/2026, 23:21:54
class Solution {
public:
    int helper(int n, int k, vector<int>&nums, vector<vector<int>>&memo)
    {
        //Edge Cases
        if(k == 0) return true;
        if( n == 0) return nums[0] == k;
        if(memo[n][k] != -1) return memo[n][k];

        //recursive Cases
        bool NotTaken = helper(n-1, k, nums, memo);

        bool Taken = false;
        if(nums[n] <= k)
            Taken = helper(n-1,k-nums[n],nums, memo);
        
        return memo[n][k] = NotTaken || Taken;

    }
    bool canPartition(vector<int>& nums) {

        int n = nums.size();

        int sum = 0;
        for (int i = 0; i< n; i++)
        {
            sum += nums[i];
        }

        if( sum % 2 == 1) return false;
        else
        {
            int k = sum/2;
            vector<vector<int>>memo (n,vector<int>(k+1,-1));
            return helper(n-1,k,nums,memo);
        }
        
    }
};