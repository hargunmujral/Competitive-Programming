class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        # base case
        if amount == 0:
            return 0
        # initialized to large integers since we are taking minimums later
        dp = [10**9] * (amount)
        # for all coins values, we know they can be made with a single coin
        for coin in coins:
            if coin <= amount:
                dp[coin-1] = 1
        # for each amount value, we get the minimum number of coins 
        # needed to make it up by comparing it with all the previous steps given a 
        # coin to be added. 
        for i in range(amount):
            for c in coins:
                if i-c >=0:
                    dp[i] = min(dp[i], 1 + dp[i-c])
        # If not found we return -1
        return -1 if dp[-1] == 10**9 else dp[-1]