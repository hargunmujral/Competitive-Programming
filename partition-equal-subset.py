class Solution(object):
    def canPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        num_sum = sum(nums)
        if num_sum % 2:
            return False
        subset_sum = num_sum // 2
        dp = [1] + [0] * subset_sum
        for num in nums:
            for i in range(subset_sum, num-1, -1):
                dp[i] = dp[i] or dp[i-num]
        return dp[-1]



        # 4 5 1 -> 6

        
        