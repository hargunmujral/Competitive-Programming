class Solution
{
public:
    bool isPal(string s, int start, int end)
    {
        while (start < end)
            if (s[start++] != s[end--])
                return false;
        return true;
    }
    bool validPalindrome(string s)
    {
        int start = -1;
        int end = s.size();
        while (start++ < end--)
        {
            if (s[start] != s[end])
                return isPal(s, start, end - 1) || isPal(s, start + 1, end);
        }
        return true;
    }
};