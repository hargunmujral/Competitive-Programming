class Solution
{
public:
    // Cannot use DP due to cycles in grid, and constantly updating grid.
    // Otherwise, a standard DP approach would have made this an easy-level problem.

    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || i >= grid.size() || j >= grid[0].size() || j < 0 || !grid[i][j])
            return 0;
        int temp = grid[i][j];
        grid[i][j] = 0;
        int ans = max(dfs(grid, i + 1, j), dfs(grid, i, j + 1));
        ans = max(ans, dfs(grid, i - 1, j));
        ans = max(ans, dfs(grid, i, j - 1));
        grid[i][j] = temp;
        return ans + temp;
    }

    int getMaximumGold(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int gold = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                gold = max(gold, dfs(grid, i, j));
            }
        }
        return gold;
    }
};