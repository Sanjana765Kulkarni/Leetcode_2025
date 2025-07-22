"""Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 """
#My Code: T(n): O(n) and s(n)=O(n)

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        lst = list(s)
        for i in range (len(lst)):
            stack.append(lst[i])
            if len(stack) > 1:
                if (stack[-2] == "(" and stack[-1] == ")"):
                    stack.pop()
                    stack.pop()
                elif (stack[-2] =="[" and stack[-1] =="]"):
                    stack.pop()
                    stack.pop()
                elif (stack[-2] == "{" and stack[-1] =='}'):
                    stack.pop()
                    stack.pop()
        if len(stack) == 0:
            return True
        return False


# GPT COde:T(n): O(n) and s(n)=O(n)

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        bracket_map = {')': '(', ']': '[', '}': '{'}

        for ch in s:
            if ch in bracket_map.values():
                stack.append(ch)
            elif ch in bracket_map:
                if not stack or stack[-1] != bracket_map[ch]:
                    return False
                stack.pop()
        return len(stack) == 0
