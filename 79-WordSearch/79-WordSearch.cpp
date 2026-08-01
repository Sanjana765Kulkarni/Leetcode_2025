// Last updated: 01/08/2026, 23:24:06
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        
        // Step 1: Find the starting letter
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // If the first letter matches, start the DFS search
                if (board[i][j] == word[0] && dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, const string& word, int r, int c, int index) {
        // Base Case: If we matched all characters, we found the word
        if (index == word.length()) {
            return true;
        }
        
        // Base Case: Check boundaries, matching characters, and if already visited
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[index]) {
            return false;
        }
        
        // Step 3: Mark the current cell as visited
        char temp = board[r][c];
        board[r][c] = '#'; 
        
        // Step 2 & 4: Explore all 4 adjacent directions
        bool found = dfs(board, word, r + 1, c, index + 1) || // Down
                     dfs(board, word, r - 1, c, index + 1) || // Up
                     dfs(board, word, r, c + 1, index + 1) || // Right
                     dfs(board, word, r, c - 1, index + 1);   // Left
        
        // Step 4 (Backtrack): Restore the cell for alternative path options
        board[r][c] = temp;
        
        return found;
    }
};