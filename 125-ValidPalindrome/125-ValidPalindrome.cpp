// Last updated: 03/03/2026, 20:06:51
class Solution {
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;

        while(left < right)
        {
            while(left < right && !isalnum(s[left]))
                left++;

            while(left < right && !isalnum(s[right]))
                right--;

            if(tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};
