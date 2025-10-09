# Last updated: 09/10/2025, 09:40:30
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        symbol ={
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100, 
            "D" : 500,
            "M" : 1000
        }

        lst = list(s)
        d = [symbol[ch] for ch in lst]
        #print (d)
        
        for i in range (0,len(lst)-1,1):
                
            if i+1 < len(lst) and d[i] < d[i+1]:
                d[i+1] = d[i+1] - d[i]
                d[i] = 0

        print (d)
        rt = sum(d)
        return rt
