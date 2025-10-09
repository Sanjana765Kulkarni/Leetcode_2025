# Last updated: 09/10/2025, 09:40:11
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return max(set(nums),key = nums.count)
