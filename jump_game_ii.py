class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) < 2:
            return 0
        dp = [0] * len(nums)

        for i in range(len(nums)):
            num_jumps = dp[i]+1
            for j in range(i, i+nums[i]+1):
                if j >= len(nums)-1:
                    return num_jumps
                if j < len(nums) and dp[j]==0:
                    dp[j] = num_jumps 
        return dp[-1]
        