// Last updated: 04/06/2026, 23:26:10
1class Solution {
2public:
3    int BS(vector<int>& nums, int target)
4    {
5        int low = 0;
6        int high = nums.size() - 1;
7
8        // BUG FIX 1: Standard loop condition
9        while(low <= high) 
10        {
11            int mid = low + (high - low) / 2;
12            if(nums[mid] < target)
13            {
14                low = mid + 1;
15            }
16            else if (nums[mid] > target)
17            {
18                high = mid - 1;
19            }
20            else
21            {
22                return mid;
23            }
24        }
25        
26        return -1; // Move outside the loop
27    }
28
29    int search(vector<int>& nums, int target) {
30        if (nums.empty()) return -1;
31
32        // 1. Find the index of the minimum element
33        int min_it = min_element(nums.begin(), nums.end()) - nums.begin();
34        int n = nums.size();
35
36        // 2. Sort the array to allow binary search
37        sort(nums.begin(), nums.end());
38
39        // 3. Find the target in the sorted array
40        int i = BS(nums, target);
41
42        // If element doesn't exist, return -1
43        if (i == -1) return -1;
44
45        // BUG FIX 2: Correct circular index mapping logic
46        return (i + min_it) % n;
47    }
48};