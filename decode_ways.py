class Solution(object):
    def numDecodings(self, s):
        """
        :type s: str
        :rtype: int
        """

        # Initialize a dp array of size len(s) + 1, and set the first two element to 1. 
        # The extra slot is so we can index back by 2 in our loop
        dp = [0] * (len(s) + 1)
        dp[0] = 1
        dp[1] = 1

        # Edge cases
        if s[0] == '0':
            return 0 
        if len(s) == 1:
            return 1
        
        # If we encounter a 0, it resets our "counter", since we cannot segment the current 
        # value by a length of 1 (0 by itself is invalid). Only if the number prior is a 1 or 2, 
        # can the counter be "restored". And we can only make chunks of two if the substring 
        # s[i-2 : i] is between "10" and "26".
        for i in range(2, len(s)+1):
            dp[i] = 0 if s[i-1] == '0' else dp[i-1]
            if s[i-2] == '1' or (s[i-2] == '2' and int(s[i-1]) < 7):
                dp[i] += dp[i-2]
            print(dp)
        # the last value in our dp is going to be the number of combinations since the combos 
        # propogate forward
        return dp[-1]