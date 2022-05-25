#include <map>
class Solution
{
public:
    int longestPalindrome(string s)
    {
        vector<int> out(128, 0);
        for (const auto &i : s)
        {
            out.at(i)++;
        }
        int len = 0;
        for (const auto &j : out)
        {
            if (j % 2 == 0)
                len += j;
            else
                len += j - 1;
        }
        return len + 1 < s.length() ? len + 1 : s.length();
    }
};