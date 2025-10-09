# Last updated: 09/10/2025, 09:40:25
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        for i in range (len(nums)):
            if val in nums:
                nums.remove(val)
            else: 
                return len(nums)