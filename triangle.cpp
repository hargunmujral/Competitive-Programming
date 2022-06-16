class Solution
{
public:
    int findMin(int row, int col, int size, vector<vector<int>> &dp, vector<vector<int>> &triangle)
    {
        if (dp[row][col] != -1)
            return dp[row][col];
        if (row == size - 1)
            return dp[row][col] = triangle[row][col];
        return dp[row][col] = triangle[row][col] + min(findMin(row + 1, col, size, dp, triangle), findMin(row + 1, col + 1, size, dp, triangle));
    }
    int minimumTotal(vector<vector<int>> &triangle)
    {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1));
        return findMin(0, 0, triangle.size(), dp, triangle);
    }
};
