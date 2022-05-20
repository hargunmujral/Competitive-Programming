class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<int> out(26, 0);

        for (auto i : magazine)
        {
            out.at(i - 'a')++;
        }

        for (auto i : ransomNote)
        {
            if (out.at(i - 'a') > 0)
                out.at(i - 'a')--;
            else
                return false;
        }
        return true;
    }
};