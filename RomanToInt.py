"""Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 """
# my code T(n) = O(n) – linear time
#S(n) = O(n) – linear space

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


# efficient code T(n) = O(n) – linear time
#S(n) = O(1) 
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        symbol = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        total = 0     # Final result
        prev = 0      # Stores previous symbol value for comparison

        # Step through string from RIGHT to LEFT
        for ch in reversed(s):  # "V", "I", "C", "X", "M", "C", "M"
            val = symbol[ch]

            # Case 1: Subtraction condition (e.g. I before V)
            if val < prev:
                total -= val
                # Print trace
                print(f"Subtracting {val} because {val} < {prev} => total = {total}")
            else:
                total += val
                # Print trace
                print(f"Adding {val} because {val} >= {prev} => total = {total}")

            prev = val  # Update previous value

        return total

