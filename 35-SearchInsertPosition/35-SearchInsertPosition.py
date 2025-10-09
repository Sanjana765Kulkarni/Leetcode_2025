# Last updated: 09/10/2025, 09:40:22
class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if target in nums:
            return nums.index(target)
        elif target > nums[-1]:
                return len(nums)
        elif target < nums[0]:
            return 0
        for i in range (len(nums)):
            if nums[i] > target and nums[i-1]<target:
                return i
            


        