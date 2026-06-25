// Last updated: 25/06/2026, 14:40:42
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        // vector<int> arr;
5        // arr.push_back(INT_MIN);
6        // arr.insert(arr.end(),nums.begin(), nums.end());
7        // arr.push_back(INT_MIN);
8
9        int n = nums.size();
10        int low = 0;
11        int high = n-1;
12        int mid = 0;
13
14        while( low < high)
15        {
16            mid = low + (high-low)/2;
17
18            if( nums[mid] > nums[mid+1] )
19            {
20                high = mid;
21            }
22            else 
23            {
24                low = mid+1;
25            }
26
27        }
28
29        return low;
30        
31    }
32};