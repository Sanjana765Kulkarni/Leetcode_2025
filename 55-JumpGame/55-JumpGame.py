# Last updated: 09/10/2025, 09:40:20
class Solution(object):
    def canJump(self, nums):
        m = 0
        for i, n in enumerate(nums):
            if i > m:
                return False
            m = max(m, i+n)
        return True