"""Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome."""

#my solution: T(n)=n, S(n)=0
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        nums = [ int(d) for d in str(x)]
        for i, num in enumerate(nums):
            if num != nums[-1*(i+1)]:
                return False
        
        return True
  #approach 2:T(n)=n, S(n)=0
  class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x <0:
            return False
        reverse = int(str(x)[::-1])
        if x == reverse:
            return True
        else:
            return False
#gpt solution:T(n)=n, S(n)=0
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        # Negative numbers and numbers ending with 0 (but not 0 itself) are not palindromes
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

        reversed_half = 0
        while x > reversed_half:
            reversed_half = reversed_half * 10 + x % 10
            x = x // 10

        # For even length: x == reversed_half
        # For odd length: x == reversed_half // 10 (middle digit ignored)
        return x == reversed_half or x == reversed_half // 10
