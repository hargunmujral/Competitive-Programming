class Solution
{
public:
    void overwrite(vector<vector<int>> &matrix, int row, int col)
    {
        for (int i = 0; i < matrix[row].size(); i++)
            matrix[row][i] = 0;
        for (int i = 0; i < matrix.size(); i++)
            matrix[i][col] = 0;
    }
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<pair<int, int>> pos;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                    pos.push_back({i, j});
            }
        }
        for (const auto &i : pos)
            overwrite(matrix, i.first, i.second);
    }
};