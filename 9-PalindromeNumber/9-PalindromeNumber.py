# Last updated: 09/10/2025, 09:40:31
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x <0:
            return False
        reverse = int(str(x)[::-1])
        if x == reverse:
            return True
        else:
            return False

        