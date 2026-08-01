// Last updated: 01/08/2026, 23:19:40
#include <algorithm>
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

        sort(asteroids.begin(), asteroids.end());
        bool res = false;
        long long sum =(long int) mass;
        long long current_sum = (long int) mass;

        for ( int i = 0; i< asteroids.size(); i++)
        {
            if( current_sum >= asteroids[i])
            {
                current_sum += (long int) asteroids[i];
            }

            sum += (long int)asteroids[i];

        }

        cout << sum << "\n"<< mass;

        if ( sum == current_sum)
        {
            res = true;
        }
        
        return res;
    }
};