class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.append(0)
        n = len(nums)
        for i in range(n):
            if nums[i] < 1 or nums[i] >= n:
                nums[i] = 0
        for i in range(n):
            # Nums at this point, has onlys 0s and values between 1 and n-1
            nums[nums[i] % n] += n
        for i in range(n):
            if not nums[i] / n:
                return i 
        return n
        