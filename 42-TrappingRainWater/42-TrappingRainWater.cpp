// Last updated: 01/08/2026, 23:24:54
class Solution {
public:
    int trap(vector<int>& s) {
        int l =0,r=0,total=0,left_max =0; int right_max =0;

        int n = s.size();

        r = n-1;

        while(l<r)
        {
            if(s[l] < s[r])
            {
                if(s[l] >= left_max)
                    left_max = s[l];
                else
                    total += left_max - s[l];
                
                l = l+1;
            }
            else
            {
                if( s[r] > right_max)
                    right_max = s[r];
                else
                    total += right_max -s[r];
                r = r-1;
            }
        }

        return total;
        
    }
};