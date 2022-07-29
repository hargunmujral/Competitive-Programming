class Solution
{
public:
    char repeatedCharacter(string s)
    {
        unordered_set<char> set;
        for (char &c : s)
        {
            if (set.count(c))
                return c;
            set.insert(c);
        }
        return s[0];
    }
};