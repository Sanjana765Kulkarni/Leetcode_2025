# Last updated: 09/10/2025, 14:28:35
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        it = iter(t)
        return all(c in it for c in s)
        