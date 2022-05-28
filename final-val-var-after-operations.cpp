class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int X = 0;
        for (const auto &i : operations)
        {
            if (i[1] == '-')
                --X;
            else
                ++X;
        }
        return X;
    }
};