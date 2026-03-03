// Last updated: 03/03/2026, 20:06:36
#include<algorithm>
class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for (int i =0; i< n;++i)
        {
            if (arr[i] != i)
                return i;
        }
        return n;
    }
};