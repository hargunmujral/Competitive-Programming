class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int delcount = 0;
        for (int i = 0; i < strs[0].size(); i++)
        {
            for (int j = 0; j + 1 < strs.size(); j++)
            {
                if (strs[j + 1][i] < strs[j][i])
                {
                    delcount++;
                    break;
                }
            }
        }
        return delcount;
    }
};