class Solution(object):

    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        nums = sorted(nums)
        res = []

        def backtrack(i, subset):
            # print(i)
            if i == len(nums):
                res.append(subset)
                return
            
            # with new element
            new_subset = [num for num in subset]
            new_subset.append(nums[i])
            backtrack(i+1, new_subset)

            # skipping duplicates
            while(i + 1 < len(nums) and nums[i] == nums[i+1]):
                i += 1

            # without new element 
            backtrack(i+1, subset)
        backtrack(0, [])
        return res
