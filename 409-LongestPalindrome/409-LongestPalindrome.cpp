// Last updated: 01/08/2026, 23:22:00
class Solution {
public:
    int longestPalindrome(string s) {
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++; 
    }

    int sum = 0;
    int maxOdd = 0;

    for (auto m : mp) {
        int count = m.second; 
        if (count % 2 == 0) {
            sum += count;
        } else {
            if (count > maxOdd) {
                if (maxOdd > 0) sum += (maxOdd - 1);
                maxOdd = count;
            } else {
                sum += (count - 1);
            }
        }
    }
    
    return sum + maxOdd;
}
};