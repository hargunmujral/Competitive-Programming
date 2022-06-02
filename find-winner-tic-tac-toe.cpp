class Solution
{
public:
    string tictactoe(vector<vector<int>> &moves)
    {
        vector<vector<char>> grid(3, vector<char>(3, ' '));
        for (int i = 0; i < moves.size(); i++)
        {
            i % 2 == 0 ? grid[moves[i][0]][moves[i][1]] = 'X'
                       : grid[moves[i][0]][moves[i][1]] = 'O';
        }
        if (count(grid.begin(), grid.end(), (vector<char>){'X', 'X', 'X'}) ||
            (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') ||
            (grid[2][0] == 'X' && grid[1][1] == 'X' && grid[0][2] == 'X'))
            return "A";
        if (count(grid.begin(), grid.end(), (vector<char>){'O', 'O', 'O'}) ||
            (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') ||
            (grid[2][0] == 'O' && grid[1][1] == 'O' && grid[0][2] == 'O'))
            return "B";
        for (int j = 0; j < 3; j++)
            if (grid[0][j] == 'X' && grid[1][j] == 'X' && grid[2][j] == 'X')
                return "A";
        for (int j = 0; j < 3; j++)
            if (grid[0][j] == 'O' && grid[1][j] == 'O' && grid[2][j] == 'O')
                return "B";
        if (moves.size() == 9)
            return "Draw";
        return "Pending";
    }
};