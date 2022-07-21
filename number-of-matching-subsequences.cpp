class Solution
{
public:
    bool subseq(string s, string word)
    {
        int count1 = 0;
        int count2 = 0;
        while (count1 < s.size() && count2 < word.size())
        {
            if (s[count1] == word[count2])
            {
                count1++;
                count2++;
            }
            else
                count1++;
        }
        return count2 == word.size();
    }
    int numMatchingSubseq(string s, vector<string> &words)
    {
        int count = 0;
        unordered_map<string, int> map;
        for (const string &word : words)
            map[word]++;
        for (auto word = map.begin(); word != map.end(); word++)
            if (subseq(s, word->first))
                count += word->second;
        return count;
    }
};