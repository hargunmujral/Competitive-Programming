class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        subsets = [set()]
        subset_size = 1
        start_index = 0 
        for session in range(len(nums)):
            end_index = len(subsets) 
            for j in range(start_index, end_index):
                for k in range(len(nums)):
                    if k not in subsets[j]:
                        new_set = subsets[j].copy()
                        new_set.add(k)
                        if new_set not in subsets:
                            subsets.append(new_set) 
            start_index = end_index
        res = []
        for subset in subsets:
            to_add = [nums[i] for i in subset]
            append = True
            for arr in res:
                if sorted(arr) == sorted(to_add):
                    append = False
            if append:
                res.append(to_add)
        return res