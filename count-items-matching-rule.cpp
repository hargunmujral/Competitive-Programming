class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int key;
        int count = 0;
        if (ruleKey == "type")
            key = 0;
        else if (ruleKey == "color")
            key = 1;
        else
            key = 2;
        for (const auto &i : items)
            if (i[key] == ruleValue)
                count++;
        return count;
    }
};