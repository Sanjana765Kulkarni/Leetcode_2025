# Last updated: 03/03/2026, 20:06:29
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        it = iter(t)
        return all(c in it for c in s)
        