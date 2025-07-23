"""Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1."""

#my code
#Time Complexity: O(N * M)
#Space Complexity: O(1)
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

#gpt code
#Time Complexity: O(N * M)
#Space Complexity: O(1)


class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """

        # Edge case: empty needle
        if not needle:
            return 0

        # Step 1: Build the LPS (Longest Prefix Suffix) array
        def build_lps(pattern):
            lps = [0] * len(pattern)
            length = 0
            i = 1
            while i < len(pattern):
                if pattern[i] == pattern[length]:
                    length += 1
                    lps[i] = length
                    i += 1
                else:
                    if length != 0:
                        length = lps[length - 1]
                    else:
                        lps[i] = 0
                        i += 1
            return lps

        lps = build_lps(needle)

        # Step 2: Search using the LPS array
        i = j = 0  # i for haystack, j for needle
        while i < len(haystack):
            if haystack[i] == needle[j]:
                i += 1
                j += 1
                if j == len(needle):
                    return i - j  # match found
            else:
                if j != 0:
                    j = lps[j - 1]
                else:
                    i += 1

        return -1  # no match found
