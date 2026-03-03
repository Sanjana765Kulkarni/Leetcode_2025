// Last updated: 03/03/2026, 20:07:40
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= (int)s.size()) return s;

        vector<string> rows(numRows);
        int cur = 0;
        int dir = -1; // will flip on first char to go down

        for (char c : s) {
            rows[cur].push_back(c);
            // flip direction when we hit top (0) or bottom (numRows-1)
            if (cur == 0 || cur == numRows - 1) dir = -dir;
            cur += dir;
        }

        // concatenate rows
        string result;
        result.reserve(s.size());
        for (const string &r : rows) result += r;
        return result;
    }
};