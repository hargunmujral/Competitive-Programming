class Solution
{
public:
    string greatestLetter(string s)
    {
        vector<char> map(128, 0);
        for (const char &c : s)
            map[c]++;
        for (int i = 122; i >= 97; i--)
            if (map[i] && map[i - 32])
                return string(1, toupper(char(i)));
        return "";
    }
};