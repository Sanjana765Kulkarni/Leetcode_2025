"""Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings."""

#My code
# T(n) = O(s); S(n) = O(1)
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
            


#efficient code
# T(n) = O(s); S(n) = O(1)
class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        
        for i in range(len(strs[0])):
            ch = strs[0][i]
            for word in strs[1:]:
                if i >= len(word) or word[i] != ch:
                    return strs[0][:i]
        
        return strs[0]
