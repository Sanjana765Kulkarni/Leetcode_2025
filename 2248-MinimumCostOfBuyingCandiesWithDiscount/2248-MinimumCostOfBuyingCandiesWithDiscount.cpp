// Last updated: 01/08/2026, 23:19:37
#include <algorithm>
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum =0;

        sort(cost.begin(),cost.end(),greater<int>());

        for( int i =0; i< cost.size(); i++)
        {
            if(i%3 != 2)
            {
                sum = sum + cost[i];
            }

        }

        return sum;
        
    }
};