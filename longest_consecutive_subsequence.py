class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num_set = set(nums)
        count = 0
        maxCount = 0
        while(num_set):
            num = num_set.pop()
            count = 1
            temp_num = num
            while(temp_num + 1 in num_set):
                num_set.remove(temp_num+1)
                temp_num += 1
                count += 1
            temp_num = num 
            while(temp_num - 1 in num_set):
                num_set.remove(temp_num-1)
                temp_num -= 1
                count += 1
            maxCount = max(count, maxCount)
        return maxCount

        