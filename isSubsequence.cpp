class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int pointer = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == s[pointer])
                pointer++;
        }
        return pointer == s.size();
    }
};