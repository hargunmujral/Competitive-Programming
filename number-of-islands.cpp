class Solution
{
public:
    int dfs(int i, int j, vector<vector<int>> &visited, vector<vector<char>> &grid)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
            return 0;
        if (grid[i][j] == '0' || visited[i][j])
            return 0;
        visited[i][j] = 1;
        dfs(i - 1, j, visited, grid);
        dfs(i, j - 1, visited, grid);
        dfs(i + 1, j, visited, grid);
        dfs(i, j + 1, visited, grid);
        return 1;
    }
    int numIslands(vector<vector<char>> &grid)
    {
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), false));
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                count += dfs(i, j, visited, grid);
            }
        }
        return count;
    }
};