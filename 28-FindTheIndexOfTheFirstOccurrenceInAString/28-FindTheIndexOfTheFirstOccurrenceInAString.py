# Last updated: 09/10/2025, 09:40:23
class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if needle == "":
            return -1
        
        for i in range (len(haystack)):
            if haystack[i:i+len(needle)] == needle and i+len(needle)<=len(haystack):
                return i
        return -1