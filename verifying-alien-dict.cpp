class Solution
{
public:
    unordered_map<char, int> dict;
    bool bigger(const string &s1, const string &s2)
    {
        int comps = min(s1.length(), s2.length());
        for (int i = 0; i < comps; i++)
        {
            if (dict[s1[i]] != dict[s2[i]])
                return dict[s2[i]] > dict[s1[i]];
        }
        return s2.size() >= s1.size();
    }

    bool isAlienSorted(vector<string> &words, string order)
    {
        for (int i = 0; i < order.length(); i++)
        {
            dict[order[i]] = i;
        }
        for (int i = 0; i < words.size() - 1; i++)
        {
            if (!bigger(words[i], words[i + 1]))
                return false;
        }
        return true;
    }
};