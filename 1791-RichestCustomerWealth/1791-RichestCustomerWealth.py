# Last updated: 09/10/2025, 09:39:56
class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        
        maximum = 0
        
        for i in range(len(accounts)):
            add = sum(accounts[i])
            if maximum < add:
                maximum = add
        return maximum