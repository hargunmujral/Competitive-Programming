class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # each index represents the longest increasing subsequence ending at that index (minimum 1)
        dp = [1] * len(nums)

        # loop through the array, checking all previous values to see if we can build 
        # a longer increasing subsequence that ends at the current index
        for i in range(1, len(nums)):
            # if the current value is greater than the previous value, we can simply increment
            if nums[i] > nums[i-1]:
                dp[i] = 1 + dp[i-1]
            # We should still check all previous values to be safe as we may have skipped over
            # a longer increasing subsequence
            for m in range(0, i):
                if (dp[m]+1 > dp[i]) and (nums[i] > nums[m]):
                    dp[i] = dp[m] + 1
        return max(dp)

