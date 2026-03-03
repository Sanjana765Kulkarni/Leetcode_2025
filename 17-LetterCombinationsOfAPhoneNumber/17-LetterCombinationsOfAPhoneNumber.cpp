// Last updated: 03/03/2026, 20:07:22
class Solution {
public:
    vector<string> letterCombinations(const string& digits) {
        if (digits.empty()) return {};

        // mapping for '0'..'9', unused entries left empty
        vector<string> map(10);
        map[2] = "abc";
        map[3] = "def";
        map[4] = "ghi";
        map[5] = "jkl";
        map[6] = "mno";
        map[7] = "pqrs";
        map[8] = "tuv";
        map[9] = "wxyz";

        vector<string> res;
        string cur;
        cur.reserve(digits.size());
        backtrack(digits, 0, map, cur, res);
        return res;
    }

private:
    void backtrack(const string& digits, int idx, const vector<string>& map,
                   string& cur, vector<string>& res) {
        if (idx == (int)digits.size()) {
            res.push_back(cur);
            return;
        }
        int d = digits[idx] - '0';
        const string& letters = map[d];
        for (char c : letters) {
            cur.push_back(c);
            backtrack(digits, idx + 1, map, cur, res);
            cur.pop_back();
        }
    }
};