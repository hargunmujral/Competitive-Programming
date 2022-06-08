class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> out;
        out.push_back({1});
        if (numRows >= 2)
            out.push_back({1, 1});
        int count = 2;
        while (count < numRows)
        {
            vector<int> cur(count + 1, 1);
            for (int i = 1; i < count; i++)
            {
                cur[i] = out[count - 1][i - 1] + out[count - 1][i];
            }
            out.push_back(cur);
            count++;
        }
        return out;
    }
};