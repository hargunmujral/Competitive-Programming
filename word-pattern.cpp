class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        s = s.split(" ")
        res = {}
        if(len(set(s)) != len(set(pattern)) or len(s) != len(pattern)):
            return False
        for num, c in enumerate(pattern):
            if not c in res.keys():
                res[c] = s[num]
            else:
                if res[c] != s[num]:
                    return False
        return True
