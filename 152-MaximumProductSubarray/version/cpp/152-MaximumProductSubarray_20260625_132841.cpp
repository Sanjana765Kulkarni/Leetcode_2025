// Last updated: 25/06/2026, 13:28:41
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int maxi_1 = INT_MIN;
5        int maxi_2 = INT_MIN;
6        int n = nums.size();
7        int product = 1;
8
9        for ( int i = 0; i< n; i++)
10        {
11            product = product * nums[i];
12            
13            maxi_1 = max(maxi_1,product);
14            if(product == 0) product = 1;
15        }
16
17        product = 1;
18        for ( int i = n-1; i>-1; i--)
19        {
20            product = product * nums[i];
21            
22            maxi_2 = max(maxi_2,product);
23            if(product == 0) product = 1;
24        }
25
26
27        return max(maxi_1, maxi_2);
28
29    }
30};