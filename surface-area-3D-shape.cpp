#include <vector>

class Solution
{
public:
    int surfaceArea(vector<vector<int>> &grid)
    {
        int count = 0;
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int curFaces = grid[i][j] == 0 ? 0 : 2 + 4 * grid[i][j];
                if (i >= 1)
                {
                    curFaces -= min(grid[i - 1][j], grid[i][j]);
                }
                if (j >= 1)
                {
                    curFaces -= min(grid[i][j - 1], grid[i][j]);
                }
                if (i < n - 1)
                {
                    curFaces -= min(grid[i][j], grid[i + 1][j]);
                }
                if (j < n - 1)
                {
                    curFaces -= min(grid[i][j], grid[i][j + 1]);
                }
                count += curFaces;
            }
        }
        return count;
    }
};