class Solution
{
public:
    bool check(string s, unordered_set<string> &wordSet)
    {
        for (int i = 1; i < s.size(); i++)
        {
            string pref = s.substr(0, i);
            string suff = s.substr(i, s.length());
            if (wordSet.count(pref) && (wordSet.count(suff) || check(suff, wordSet)))
                return true;
        }
        return false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
    {
        unordered_set<string> wordSet(words.begin(), words.end());
        vector<string> res;
        for (const auto &s : words)
        {
            if (check(s, wordSet))
                res.push_back(s);
        }
        return res;
    }
};