class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        count, end, reach = 0,0,0
        for i in range(len(nums)-1):
            reach = max(reach, i + nums[i])
            if i==end:
                end = reach
                count += 1 
        return count