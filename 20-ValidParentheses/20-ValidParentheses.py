# Last updated: 09/10/2025, 09:40:27
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
        
            