class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        # array of boolean values, each representing the substring 
        # between i and j of string s
        dp = [[0] * len(s) for i in range(len(s))]

        # Setting all individual characters as palindromes, and all 
        # equal substrings of size 2 as palindromes
        for i in range(len(s)):
            dp[i][i] = 1
            if i < len(s) - 1 and s[i] == s[i+1]:
                dp[i][i+1] = 1

        # for all substrings of length j, starting at index i, 
        # we check if the contained substring is a palindrome, and if 
        # so, we check if the start character equals the last character 
        # in the substring. Then we set the current combo as a palindrome. 
        # this works because we've set up the substrings of size 1 & 2, and 
        # now we just loop through indices with a specified substring length that 
        # keeps increasing. Thus, we won't ever miss a case as we're going 
        # inside out
        for j in range(2, len(s)):
            for i in range(0, len(s)-j):
                if dp[i+1][i + j-1] and s[i]==s[i+j]:
                    dp[i][i+j] = 1

        # Now we find the maximum palindromic substring by taking the maximal 
        # difference of the end - start + 1 of valid palindromes
        start, max_len = 0, 0
        for i in range(len(s)):
            for j in range(len(s)):
                if dp[i][j] and j-i+1 > max_len:
                    max_len = j-i+1
                    start = i
        
        # return that substring, overall taking O(n^2) time and space. That's because we 
        # initialize a dp array of size n^2, and never loop more than n^2 times in a 
        # step (3 sequential loops, at worst n^2, thus overall O(n^2)).
        return s[start:max_len + start]






        