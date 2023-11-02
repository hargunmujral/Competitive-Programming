class Solution(object):

    def checkInclusion(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        sliding_arr = [0] * 128
        s1_arr = [0] * 128
        for c in s1:
            s1_arr[ord(c)] += 1 
        for c in s2[0:len(s1)]:
            sliding_arr[ord(c)] += 1 
        start, end = 0, len(s1)
        while(end < len(s2)):
            if s1_arr == sliding_arr:
                return True
            sliding_arr[ord(s2[start])] -= 1 
            sliding_arr[ord(s2[end])] += 1 
            start += 1 
            end += 1 
        return s1_arr == sliding_arr
