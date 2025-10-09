# Last updated: 09/10/2025, 09:40:26
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        res = len(nums)
        j = 0
        i=-1
        while i <= (len(nums)):
            if i<len(nums)-1 and nums[i] in nums[0:i]:
                j= j+1
                nums.pop(i)    
                i-=1
            i+=1    
        k = res-j   
        #print (k)
        return k
