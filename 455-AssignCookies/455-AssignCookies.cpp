// Last updated: 01/08/2026, 23:21:49
#include<algorithm>
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int count =0;

        int l = 0,r = 0;

        int m = s.size();
        int n = g.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (l<m && r<n)
        {
            if(s[l] >= g[r])
            {
                count ++;
                r = r+1;
            }

            l = l+1;
        }

        return count;
        
    }
};