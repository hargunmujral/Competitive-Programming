class Solution
{
public:
    int minCostToMoveChips(vector<int> &position)
    {
        int odds = 0;
        for (int i = 0; i < position.size(); i++)
            if (position[i] % 2)
                odds++;
        return min(odds, int(position.size() - odds));
    }
};