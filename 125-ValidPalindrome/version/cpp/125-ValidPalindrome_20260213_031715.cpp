// Last updated: 13/02/2026, 03:17:15
1class Solution {
2public:
3    bool isPalindrome(string s)
4    {
5        int left = 0;
6        int right = s.length() - 1;
7
8        while(left < right)
9        {
10            while(left < right && !isalnum(s[left]))
11                left++;
12
13            while(left < right && !isalnum(s[right]))
14                right--;
15
16            if(tolower(s[left]) != tolower(s[right]))
17                return false;
18
19            left++;
20            right--;
21        }
22
23        return true;
24    }
25};
26