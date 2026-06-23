// Last updated: 23/06/2026, 13:49:07
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int l = 0;
5        int r = 0;
6        int length = 0;
7        int h = k;
8
9        while (r < nums.size())
10        {
11            if( nums[r] == 1)
12            {
13                r++;
14            }
15            else if(nums[r] == 0 && h >0)
16            {
17                h--;
18                r++;
19            }
20            else if ( nums[r] == 0 && h == 0)
21            {
22                
23                if(nums[l] == 0)
24                {
25                    h++;
26                }
27                l++;
28            }
29            length = max (r-l,length);
30        }
31
32        return length;
33    }
34};