// Last updated: 14/06/2026, 14:31:33
1class Solution {
2public:
3    int trap(vector<int>& s) {
4        int l =0,r=0,total=0,left_max =0; int right_max =0;
5
6        int n = s.size();
7
8        r = n-1;
9
10        while(l<r)
11        {
12            if(s[l] < s[r])
13            {
14                if(s[l] >= left_max)
15                    left_max = s[l];
16                else
17                    total += left_max - s[l];
18                
19                l = l+1;
20            }
21            else
22            {
23                if( s[r] > right_max)
24                    right_max = s[r];
25                else
26                    total += right_max -s[r];
27                r = r-1;
28            }
29        }
30
31        return total;
32        
33    }
34};