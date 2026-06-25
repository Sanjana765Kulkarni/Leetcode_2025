// Last updated: 25/06/2026, 12:02:59
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4         int i = nums.size()-1;
5         int j = nums.size()-1;
6
7         while( i > 0 && nums[i-1] >= nums[i])
8            i--;
9        if( i == 0)
10        {
11            reverse( nums.begin(), nums.end());
12            return;
13        }
14         while( j > 0 && nums[j] <= nums[i-1])
15            j--;
16        
17        swap(nums[i-1],nums[j]);
18        reverse(nums.begin()+i, nums.end());
19    }
20};