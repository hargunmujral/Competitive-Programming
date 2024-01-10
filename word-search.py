class Solution(object):
    
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        def dfs(i, j, ind):
            if i >= len(board) or i < 0 or j >= len(board[0]) or j < 0:
                return False
            if word[ind] != board[i][j]:
                return False 
            if ind == len(word) - 1 and word[ind] == board[i][j]:
                return True
            temp_board = board[i][j]
            board[i][j] = '.'
            s = dfs(i+1, j, ind+1) or dfs(i, j+1, ind+1) or dfs(i-1, j, ind+1) or dfs(i, j-1, ind+1)
            board[i][j] = temp_board
            return s
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == word[0] and dfs(i, j, 0):
                    return True
        return False

