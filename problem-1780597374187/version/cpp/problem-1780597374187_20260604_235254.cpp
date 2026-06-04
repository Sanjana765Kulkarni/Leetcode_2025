// Last updated: 04/06/2026, 23:52:54
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4
5        int low = 0;
6        int high = nums.size()-1;
7
8        //int min_it = INT_MAX;
9
10        while (low < high) {
11            int mid = low + (high - low) / 2;
12            if (nums[mid] > nums[high]) {
13                low = mid + 1;
14            } 
15            
16            else {
17                high = mid;
18            }
19        }
20
21        return nums[low];
22    }
23};