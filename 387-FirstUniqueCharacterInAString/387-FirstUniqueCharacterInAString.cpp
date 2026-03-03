// Last updated: 03/03/2026, 20:06:30
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for(char c : s)
            freq[c - 'a']++;

        for(int i = 0; i < s.length(); i++)
            if(freq[s[i] - 'a'] == 1)
                return i;

        return -1;
    }
};
