// Last updated: 03/03/2026, 20:05:56
#include <vector>
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {

        int r = grid.size();
        int c = grid[0].size();

        if ( r != c)
        {
            return false;
        }

        for ( int i = 0; i< r; i++)
        {
            for (  int j =0; j<c; j++)
            {
                bool OnDiag = i == j || grid.size()-1 == i +j;
                if ( OnDiag )
                {
                    if (grid [i][j] == 0 )
                    {
                        return false;
                    }
                    

                }
                else
                {
                   if (grid [i][j] != 0 )
                    {
                        return false;
                        
                    }
                    
                }
            }
        }
        return true;
    }
};