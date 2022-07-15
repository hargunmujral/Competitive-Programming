class Solution
{
public:
    int maxArea(vector<vector<int>> &grid, int row, int col)
    {
        if (row < 0 || col < 0 || row == grid.size() || col == grid[0].size() || !grid[row][col])
            return 0;
        grid[row][col] = 0;
        return 1 + maxArea(grid, row - 1, col) + maxArea(grid, row, col - 1) + maxArea(grid, row + 1, col) + maxArea(grid, row, col + 1);
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int maxim = 0;
        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
                maxim = max(maxArea(grid, row, col), maxim);
            }
        }
        return maxim;
    }
};