class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: List[str]
        :rtype: bool
        """

        # Tracking all starting indices of a valid word break
        # Initializing a dp array to track whether a word break is possible
        # ending at the given index
        start_indices = [0]
        dp = [0] * len(s)

        # for every index in s, we check if there is a word break possible
        # from all previous starting indices, outside in (largest first)
        # if we find a word break, we add the index to the start_indices array
        # and break out of the loop
        for i in range(len(s)):
            for index in start_indices:
                if s[index:i+1] in wordDict:
                    dp[i] = 1
                    start_indices.append(i+1)
                    break
        return dp[-1]==1