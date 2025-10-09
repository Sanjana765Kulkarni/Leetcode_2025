# Last updated: 09/10/2025, 09:40:08
class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        if k != 0 and len(nums)> 1:
            if k > len(nums):
                # for i in range (k):
                #     for j in range (len(nums)-1,-1,-1):
                #         if j == len(nums)-1:
                #             temp=nums[j]
                #         else:
                #             nums[j+1] = nums[j]
                #     nums[0]=temp
                k=k%len(nums)
            
            nums1 = nums[-k:]
            nums2 = nums[:len(nums)-k]
            nums1.extend(nums2)
            nums[:]= nums1
            print (nums)
        
