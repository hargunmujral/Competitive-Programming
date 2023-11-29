class Solution(object):
    # res = []
    def isPalindrome(self, s):
        return s == s[::-1]
   
    def build_palindromes(self, res, sectioned_str,  s, i):
        if i >= len(s) and len(sectioned_str) > 0:
            res.append(list(sectioned_str))
        for j in range(i, len(s)):
            if self.isPalindrome(s[i:j+1]):
                sectioned_str.append(s[i:j+1])
                self.build_palindromes(res, sectioned_str, s, j+1)
                sectioned_str.pop()
        
    def partition(self, s):
        res = []
        temp = []
        self.build_palindromes(res, temp, s, 0)
        return res

        
