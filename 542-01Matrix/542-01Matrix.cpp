// Last updated: 01/08/2026, 23:21:34
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        vector<vector<int>> res(rows, vector<int>(cols, -1));
        queue<pair<int, int>> q;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {
                    res[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {
                int ni = curr.first + dx[i];
                int nj = curr.second + dy[i];

                if (ni >= 0 && ni < rows && nj >= 0 && nj < cols && res[ni][nj] == -1) {
                    res[ni][nj] = res[curr.first][curr.second] + 1;
                    q.push({ni, nj});
                }
            }
        }

        return res;
    }
};