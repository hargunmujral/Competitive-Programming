class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # The idea is to track the maximum and minimum product while iterating through the array. 
        # The maximum product is either the current number multiplied by the previous maximum,
        # or the current number itself. And since we may reset the producs, 
        # we track a global maximum.

        # All initialized to the first element 
        max_prod, min_prod, res = nums[0], nums[0], nums[0]

        for i in range(1, len(nums)):
            # temp variables as they mutate
            temp_1, temp_2 = max_prod, min_prod
            # we update at each step (cannot carry forward or else it's not a subarray)
            max_prod = max((temp_1 * nums[i]), (temp_2 * nums[i]), nums[i])
            min_prod = min(temp_2 * nums[i], temp_1 * nums[i], nums[i])
            # global maximum
            res = max(res, max_prod)
        return res
  