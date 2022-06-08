class Solution
{
public:
    bool isPalindrome(const string &s, const int &size)
    {
        for (int i = 0; i < size / 2; i++)
            if (s[i] != s[size - 1 - i])
                return false;
        return true;
    }
    int removePalindromeSub(string s)
    {
        if (s.size() == 0)
            return 0;
        if (isPalindrome(s, s.size()))
            return 1;
        return 2;
    }
};
