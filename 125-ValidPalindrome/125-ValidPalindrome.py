# Last updated: 09/10/2025, 09:40:12
class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        s4 = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        print s4
        if all(s4[i] == s4[len(s4)-i-1] for i in range (len(s4))) :
            return True
        return False

        