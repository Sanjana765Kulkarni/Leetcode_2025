# Last updated: 09/10/2025, 09:40:10
class Solution(object):
    def findRepeatedDnaSequences(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        st = set()
        d={}
        for i in range (len(s)):
            if (s[i:i+10]) in d:
                st.add(s[i:i+10])
            else:
                d[s[i:i+10]] =1
        print d
        return list (st)
