// Last updated: 01/08/2026, 23:22:28
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // vector<int> res;

        // for( int i ; i< matrix.size(); i++)
        // {
        //     for( int j; j< matrix[0].size(); j++)
        //     {
        //         res.push_back(matrix[i][j]);
        //     }
        // }
        for( int i = 0; i< matrix.size(); i++){
            if( find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end())
            {
                return true;
            }
        }
        return false;
        
    }
};