// Last updated: 25/06/2026, 12:33:28
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n = nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(), nums.end());
7
8        for ( int i = 0; i< n; i++)
9        {
10            int left = i+1, right = n-1;
11            if( i> 0 && nums[i] == nums[i-1]) continue;
12            while(left < right)
13            {
14                int sum = nums[right]+nums[left]+ nums[i];
15
16                if( sum == 0)
17                {
18                    ans.push_back({nums[i],nums[left], nums[right]});
19                    left ++;
20                    right --;
21                    while(left < right && nums[left] == nums[left-1]) left++;
22                    while( left < right && nums[right] == nums[right + 1]) right--;
23                }
24                else if( sum < 0) left++;
25                else right --;
26            }
27        }
28
29        return ans;
30
31
32
33
34        
35    }
36};