class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        if (m * n != original.size())
            return {};
        vector<vector<int>> array(m, vector<int>(n, 0));
        int count = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                array[i][j] = original[count++];
        return array;
    }
};