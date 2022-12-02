class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        vector<int> word1map(26, 0), word2map(26, 0), w1(26, 0), w2(26, 0);
        for (int i = 0; i < word1.size(); i++)
        {
            word1map[word1[i] - 'a']++, w1[word1[i] - 'a'] = 1;
            word2map[word2[i] - 'a']++, w2[word2[i] - 'a'] = 1;
        }
        sort(word1map.begin(), word1map.end());
        sort(word2map.begin(), word2map.end());
        return word1.size() == word2.size() && word1map == word2map && w1 == w2;
    }
};