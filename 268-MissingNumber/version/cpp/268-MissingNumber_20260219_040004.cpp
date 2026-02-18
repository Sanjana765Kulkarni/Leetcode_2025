// Last updated: 19/02/2026, 04:00:04
1#include<algorithm>
2class Solution {
3public:
4    int missingNumber(vector<int>& arr) {
5        int n = arr.size();
6        sort(arr.begin(),arr.end());
7        for (int i =0; i< n;++i)
8        {
9            if (arr[i] != i)
10                return i;
11        }
12        return n;
13    }
14};