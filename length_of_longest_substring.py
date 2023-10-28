class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) < 2:
            return len(s)
        left, right = 0, 1
        seen = {s[left]: 0}
        count, maxCount = 1, 1
        while right < len(s):
            if s[right] in seen.keys():
                maxCount = max(count, maxCount)
                left = max(left, seen[s[right]] + 1)
                count = right - left + 1
            else:
                count += 1
            seen[s[right]] = right
            right += 1 
        count = right - left
        return max(maxCount, count)


        