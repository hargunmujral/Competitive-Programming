class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int wordMax = 0;
        int localMax = 0;
        for (const auto &i : sentences)
        {
            localMax = 1 + count(i.begin(), i.end(), ' ');
            wordMax = max(localMax, wordMax);
        }
        return wordMax;
    }
};