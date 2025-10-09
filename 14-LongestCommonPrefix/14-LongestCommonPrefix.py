# Last updated: 09/10/2025, 09:40:29
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        prefix = ""
        if not strs or "" in strs:
            return ""
        if len(strs) == 1:
            prefix = strs[0]
            return prefix
        
        for i in range(len(strs[0])) :
            ch = strs[0][i]
            for k in range (1,len(strs)):
                if i >= len(strs[k]) or strs[k][i] != ch:
                     return prefix
            prefix += ch
        return prefix
            


