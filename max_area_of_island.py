class Solution(object):

    def dfs(self, seen, grid, i, j):
        if i < 0 or j < 0 or i >= len(grid) or j >= len(grid[0]) or seen[i][j]:
            return 0
        seen[i][j] = 1 
        if not grid[i][j]:
            return 0 
        return 1 + self.dfs(seen, grid, i-1, j) + self.dfs(seen, grid, i+1, j) + self.dfs(seen, grid, i, j-1) + self.dfs(seen, grid, i, j+1)
    def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        seen = [[0 for i in range(len(grid[0]))] for j in range(len(grid))]
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                count = max(count, self.dfs(seen, grid, i, j))
        return count