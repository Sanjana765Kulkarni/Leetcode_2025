// Last updated: 03/03/2026, 20:07:29
class Solution {
public:
    string intToRoman(int num) {
        // value-symbol pairs in descending order (includes subtractive forms)
        static const vector<pair<int,string>> vals = {
            {1000, "M"}, {900, "CM"},
            {500,  "D"}, {400, "CD"},
            {100,  "C"}, {90,  "XC"},
            {50,   "L"}, {40,  "XL"},
            {10,   "X"}, {9,   "IX"},
            {5,    "V"}, {4,   "IV"},
            {1,    "I"}
        };

        string res;
        for (const auto &p : vals) {
            int v = p.first;
            const string &sym = p.second;
            while (num >= v) {
                res += sym;
                num -= v;
            }
            if (num == 0) break;
        }
        return res;
    }
};