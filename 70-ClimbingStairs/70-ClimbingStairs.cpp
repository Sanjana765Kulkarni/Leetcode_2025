// Last updated: 01/08/2026, 23:24:20
class Solution {
public:
    int climbStairs(int n) {

        if(n <=2)
        {
            return n;
        }

        int prev1 = 2;
        int prev2 = 1;
        int curi =0;
        for(int i = 2; i<n; i++)
        
        {
            curi = prev1 + prev2;
            prev2 = prev1;
            prev1 = curi;
        }


        return curi ;
        
    }
};