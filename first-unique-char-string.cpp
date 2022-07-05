class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, int> out;
        for (const char &c : s)
            out[c]++;
        for (int i = 0; i < s.size(); i++)
            if (out[s[i]] == 1)
                return i;
        return -1;
    }
};