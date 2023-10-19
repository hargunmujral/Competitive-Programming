class Solution(object):

    def dfs(self, heights, water, i, j, width, length):
        if i < 0 or j < 0 or i >= length or j >= width or water[i][j]:
            return 
        water[i][j] = 1 
        if (i > 0 and heights[i-1][j] >= heights[i][j]):
            self.dfs(heights, water, i-1, j, width, length)
        if (j > 0 and heights[i][j-1] >= heights[i][j]):
            self.dfs(heights, water, i, j-1, width, length)
        if (i < length-1 and heights[i+1][j] >= heights[i][j]):
            self.dfs(heights, water, i+1, j, width, length)
        if (j < width-1 and heights[i][j+1] >= heights[i][j]):
            self.dfs(heights, water, i, j+1, width, length)
        

    def pacificAtlantic(self, heights):
        """
        :type heights: List[List[int]]
        :rtype: List[List[int]]
        """
        width = len(heights[0])
        length = len(heights)
 
        atlantic = [[0 for i in range(width)] for j in range(length)]
        pacific = [[0 for i in range(width)] for j in range(length)]
        res = []
        for i in range(length):
            for j in range(width):
                if i==0 or j==0:
                    self.dfs(heights, pacific, i, j, width, length)
                if i == length-1 or j == width - 1:
                    self.dfs(heights, atlantic, i, j, width, length) 
        for i in range(length):
            for j in range(width):
                if atlantic[i][j] and pacific[i][j]:
                    res.append([i,j])
        return res
                    
