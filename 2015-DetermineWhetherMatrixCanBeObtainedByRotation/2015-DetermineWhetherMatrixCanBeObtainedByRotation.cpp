// Last updated: 01/08/2026, 23:19:51
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();

        for (int iter = 0; iter < 4; iter++) {
            if (mat == target) return true;

                 vector<vector<int>> temp(n, vector<int>(n));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    temp[j][n - 1 - i] = mat[i][j];
                }
            }
            mat = temp; 
        }

        return false; 
    }
};