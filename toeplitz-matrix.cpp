class Solution
{
public:
    // optimized solution
    bool isToeplitzMatrixOptimized(vector<vector<int>> &matrix) {
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                if (i > 0 && j > 0 && matrix[i][j] != matrix[i - 1][j - 1])
                    return false;
        return true;
    }
    // worse solution
    bool diagonalSearch(vector<vector<int>> &matrix, pair<int, int> pos, int val)
    {
        while (pos.first < matrix.size() && pos.second < matrix[0].size())
            if (matrix[pos.first++][pos.second++] != val)
                return false;
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
            if (!diagonalSearch(matrix, {i, 0}, matrix[i][0]))
                return false;
        for (int i = 0; i < matrix[0].size(); i++)
            if (!diagonalSearch(matrix, {0, i}, matrix[0][i]))
                return false;
        return true;
    }
};