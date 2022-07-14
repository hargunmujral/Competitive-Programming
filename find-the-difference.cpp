class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int ssum = 0;
        int tsum = t.back();
        for (int i = 0; i < s.length(); i++)
        {
            tsum += t[i];
            ssum += s[i];
        }
        return (char)tsum - ssum;
    }
    char findTheDifferenceBitManip(string s, string t)
    {

        char c = t.back();
        for (int i = 0; i < s.size(); i++)
        {
            c ^= s[i];
            c ^= t[i];
        }
        return c;
    }
};