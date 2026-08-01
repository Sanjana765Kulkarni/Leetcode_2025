// Last updated: 01/08/2026, 23:24:13
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector <int> zeroRow;
        vector <int> zeroCol;

        for(int i =0; i< matrix.size(); i++)
        {
            for(int j = 0; j< matrix[0].size();j++)
            {
                if(matrix[i][j] == 0)
                {
                    zeroRow.push_back(i);
                    zeroCol.push_back(j);
                }
            }
        }
        
        for(int i =0; i< zeroRow.size(); i++)
        {
            for(int j = 0; j < matrix[0].size();j++)
            {
                matrix[zeroRow[i]][j] = 0;
            }
        }

         for(int i =0; i< zeroCol.size(); i++)
        {
            for(int j = 0; j < matrix.size();j++)
            {
                matrix[j][zeroCol[i]] = 0;
            }
        }

    }
};