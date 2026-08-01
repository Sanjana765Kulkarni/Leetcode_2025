// Last updated: 01/08/2026, 23:21:00
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int cost = 5;

        unordered_map <int,int> mp;

        mp[5] =0;
        mp[10] =0;
        mp[20] =0;

        for( int i =0; i<bills.size(); i++)
        {
            mp[bills[i]]++;
            int change = bills[i] - cost;
            
            if(change != 0)
            {
                if( change == 15)
                {
                    if( mp[10] == 0)
                    {
                        if(mp[5] < 3)
                        {
                            return false;
                        }
                        mp[5] =mp[5] -3;
                        
                    }
                    else
                    {
                        if(mp[5] < 1)
                        {
                            return false;
                        }
                        mp[10]--;
                        mp[5]--;
                
                    }
                }
                else if(change = 5)
                {
                    if( mp[5] < 1)
                    {
                        return false;
                    }
                    mp[5]--;
                }
            }

        }

        return true;


    }
};