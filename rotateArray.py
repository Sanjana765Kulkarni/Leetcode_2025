"""Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]"""

#My code: Time: O(n)
#Space: O(n) 

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        if k != 0 and len(nums)> 1:
            if k > len(nums):
               k=k%len(nums)
            
            nums1 = nums[-k:]
            nums2 = nums[:len(nums)-k]
            nums1.extend(nums2)
            nums[:]= nums1
            print (nums)

#GPT Code: Time: O(n)
#Space: O(1) (in-place)

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None (modifies nums in-place)
        """
        n = len(nums)
        k %= n  # In case k > n

        # Step 1: reverse entire array
        nums.reverse()

        # Step 2: reverse first k elements
        nums[:k] = reversed(nums[:k])

        # Step 3: reverse remaining n-k elements
        nums[k:] = reversed(nums[k:])


