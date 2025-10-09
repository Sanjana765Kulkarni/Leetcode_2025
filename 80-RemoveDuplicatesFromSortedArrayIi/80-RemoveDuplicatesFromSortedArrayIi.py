# Last updated: 09/10/2025, 09:40:17
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i = 0
        while i < (len(nums)):
            if i< len(nums) and nums.count(nums[i]) > 2:
                nums.pop(i)
                i-=1
            i+=1
        return len(nums)
        