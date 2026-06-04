// Last updated: 04/06/2026, 22:37:40
1#include <vector>
2
3class Solution {
4public:
5    // Your binary search logic, updated to accept the vector reference
6    int binarySearch(int low, int high, int target, std::vector<int>& nums) {
7        while (low <= high) {
8            int mid = low + (high - low) / 2;
9            
10            if (nums[mid] == target) {
11                return mid;
12            }
13            else if (nums[mid] > target) {
14                high = mid - 1;
15            }
16            else {
17                low = mid + 1;
18            }
19        }
20        return -1;
21    }
22
23    // This exact signature matches what LeetCode is trying to call
24    std::vector<int> searchRange(std::vector<int>& nums, int target) {
25        // Handle empty array edge case safely
26        if (nums.empty()) {
27            return {-1, -1};
28        }
29
30        int low = 0;
31        int high = nums.size() - 1; // Vectors use .size() in C++
32
33        int i = binarySearch(low, high, target, nums);
34
35        // If target doesn't exist, return [-1, -1]
36        if (i == -1) {
37            return {-1, -1};
38        }
39
40        int l = i;
41        int r = i;
42
43        // Your exact expansion logic with out-of-bounds safety guards
44        while (l > 0 && nums[l - 1] == target) {
45            l--;
46        }
47
48        while (r < nums.size() - 1 && nums[r + 1] == target) {
49            r++;
50        }
51
52        // Returns a vector containing your left and right boundaries
53        return {l, r};
54    }
55};