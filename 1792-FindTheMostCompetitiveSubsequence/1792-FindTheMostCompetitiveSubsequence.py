# Last updated: 09/10/2025, 09:40:00
class Solution(object):
    def mostCompetitive(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        stack = []
        to_remove = len(nums) - k

        for num in nums:
            while stack and num < stack[-1] and to_remove > 0:
                stack.pop()
                to_remove -= 1
            stack.append(num)

        return stack[:k]
       
    



                    


        
        