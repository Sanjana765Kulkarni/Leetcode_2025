
#My code
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        #sts = list(strs)
        prefix =''
        k = 0
        i = 0
        j = 0
        for i in range(len(strs[0])) :
            ch = strs[0][i]
            for k in range (len(strs)):
                if i<len(strs[k]) and ch == strs[k][i]:
                    if ch not in prefix:
                        prefix += ch
                else:
                    if ch in prefix:
                        prefix = prefix.replace(ch, "", 1)  # removes only first occurrence
                    return prefix
            


