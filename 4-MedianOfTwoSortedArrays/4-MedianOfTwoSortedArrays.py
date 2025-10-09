# Last updated: 09/10/2025, 09:40:33
class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1.extend(nums2)
        nums1.sort()
        print (nums1)
        if len(nums1) % 2 == 1:
            median =  len(nums1)//2
            return nums1[median]
        else:
            median = len(nums1)//2
            return (nums1[median]+nums1[median-1])/2.0
        return 0