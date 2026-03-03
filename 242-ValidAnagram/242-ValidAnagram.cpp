// Last updated: 03/03/2026, 20:06:37
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        for (char c : t)
            if (--freq[c] < 0)
                return false;

        return true;
    }
};
