// Last updated: 11/08/2026, 11:01:15
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int i,n=nums.size();
5        for(i=0;i<n;i++){
6            while(nums[i]>=1 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){
7                swap(nums[i],nums[nums[i]-1]);
8            }
9        }
10
11        for(i=0;i<n;i++){
12            if(nums[i]!=i+1) return i+1;
13        }
14
15        return n+1;
16    }
17};