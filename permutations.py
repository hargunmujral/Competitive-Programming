class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = set()
        for i in range(len(nums)):
            self.dfs([i], len(nums), res)
        list_set = list(list(i) for i in res)
        print(list_set)
        result = []
        for arr in list_set:
            result.append([nums[a] for a in arr])
        print(result)
        return result

    def dfs(self, arr, length, res):
        if length == len(arr):
            res.add(tuple(i for i in arr))
            return
        for i in range(length):
            if i not in arr:
                self.dfs(arr + [i], length, res)

        