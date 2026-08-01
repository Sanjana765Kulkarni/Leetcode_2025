// Last updated: 01/08/2026, 23:19:14
class Solution {
public:
    int totalCost =0;
    
    int minCost(int n) {
         int a = n/2;
        int b = n -a;
         int cost = a*b;
        int subcost =0;
            if(cost >1)
            {
                subcost = minCost(a)+minCost(b);
            }
        return cost + subcost;
        
    }
};