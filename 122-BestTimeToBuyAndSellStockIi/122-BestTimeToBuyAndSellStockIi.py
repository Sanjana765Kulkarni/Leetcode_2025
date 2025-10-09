# Last updated: 09/10/2025, 09:40:13
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        buy = prices[0]
        profit = 0
        for i in range (1,len(prices)):
            if prices[i] < buy:
                buy = prices[i]
            else:
                profit += prices[i] - buy
                buy = prices[i]
        return profit



        