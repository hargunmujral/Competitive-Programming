class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        return "".join([c for c, n in Counter(s).most_common() for i in range(n)])
