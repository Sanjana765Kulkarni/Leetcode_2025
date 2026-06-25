// Last updated: 25/06/2026, 14:18:25
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int n = nums.size();
5
6        int mini = *min_element(nums.begin(), nums.end());
7        return mini;
8        
9    }
10};