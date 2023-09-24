class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """


        # The intuition behind this solution is as follows:

        # 1. To handle a cycle of indices from 0 to n-1, where adjacent values cannot be selected, 
        # you may either consider the length of 0 to n-2, and 1 to n-1. This guarantees that the
        # ends of the cycle do not overlap. Thus, we loop through them separately

        # 2. for each loop, we carry forward two variables (similar to fibonacci) that store previous 
        # values to help us get the overall best solution. That is because to get the best 
        # sum, we can either take the value that is previous, or add the current value to the one 
        # 2 before (so we dont have any adjacencies)

        # 3. The higher loop's value would be the best value in this cycle.

        prev1, prev2, res1, res2 = 0, 0, 0, nums[0]

        n = len(nums)
        for i in range(n-1):
            res1 = max(prev2, prev1 + nums[i])
            prev1 = prev2 
            prev2 = res1
        
        prev1, prev2 = 0, 0
        for i in range(1, n):
            res2 = max(prev2, prev1 + nums[i])
            prev1 = prev2
            prev2 = res2 
        
        return max(res1, res2)
        