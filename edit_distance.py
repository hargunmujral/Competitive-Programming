class Solution(object):
    def minDistance(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
        # Idea is a dp array comparing edit distances between substrings from 0 to i and 0 to j
        dp = [[0] * (1+len(word2)) for _ in range(1+len(word1))]
        for i in range(1+len(word1)):
            for j in range(1+len(word2)):
                # edit distance is just length of other substring 
                # if one is 0
                if i==0 or j == 0:
                    dp[i][j] = i or j 
                    continue
                # if the character is the same in both strings, we can simply go to the next position with no penalty
                if word1[i-1] == word2[j-1]:
                    dp[i][j] = dp[i-1][j-1]
                # Otherwise, we take 1 (penalty) + the best (lowest) of the three cases:
                    # Replace: word1 at i-1 replaced with word2 at j-1, reflected in dp[i-1][j-1]
                    # Delete: word1 at i-1 is removed, thus look at dp[i-1][j]
                    # Insert: word1 at i is set to word2 at j-1, thus dp[i][j-1]
                else:
                    dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])
        return dp[-1][-1]

