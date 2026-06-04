// Last updated: 04/06/2026, 23:32:13
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4
5        sort( nums.begin(), nums.end());
6
7        int low = 0;
8        int high = nums.size()-1;
9
10        while(low <= high)
11        {
12            int mid = low + (high-low)/2;
13
14            if( nums[mid] < target)
15            {
16                low = mid +1;
17            }
18            else if( nums[mid] > target)
19            {
20                high = mid -1;
21            }
22            else
23            {
24                return true;
25            }
26
27        }
28
29        return false;
30        
31    }
32};