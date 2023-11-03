class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        left, right = 0, 0
        rolling_dict = {}
        maxCount = 0
        while right < len(s):
            if s[right] not in rolling_dict:
                rolling_dict[s[right]] = 1 
            else:
                rolling_dict[s[right]] += 1
            max_val = max(rolling_dict.values())
            while (right - left+1) - max_val > k:
                rolling_dict[s[left]] -= 1
                left += 1
            maxCount = max(maxCount, right-left+1)
            right += 1
        return maxCount