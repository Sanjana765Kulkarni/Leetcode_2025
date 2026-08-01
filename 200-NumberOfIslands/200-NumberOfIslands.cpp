// Last updated: 01/08/2026, 23:22:52
#include <vector>

class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();
        int islandCount = 0;

       
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == '1') {
                    islandCount++;
                    dfs(grid, r, c, rows, cols); 
                }
            }
        }

        return islandCount;
    }

private:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c, int rows, int cols) {
        
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0') {
            return;
        }

       
        grid[r][c] = '0';


        dfs(grid, r + 1, c, rows, cols); // Down
        dfs(grid, r - 1, c, rows, cols); // Up
        dfs(grid, r, c + 1, rows, cols); // Right
        dfs(grid, r, c - 1, rows, cols); // Left
    }
};