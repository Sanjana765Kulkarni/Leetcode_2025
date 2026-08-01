// Last updated: 01/08/2026, 23:19:55
class Solution {
public:
    bool checkOnesSegment(string s) {

        int n = s.length();
        for(int i = 1; i<n; i++)
        {
            if(s[i-1] == '0' && s[i]== '1')
            {
                return false;
            }
        }
       
        return true;
    }
};