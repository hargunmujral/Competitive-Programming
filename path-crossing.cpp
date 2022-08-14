class Solution
{
public:
    bool isPathCrossing(string path)
    {
        pair<int, int> pos = {0, 0};
        set<pair<int, int>> set;
        set.insert(pos);
        for (char c : path)
        {
            if (c == 'N')
                pos.second++;
            else if (c == 'S')
                pos.second--;
            else if (c == 'E')
                pos.first++;
            else
                pos.first--;
            if (set.count(pos))
                return true;
            set.insert(pos);
        }
        return false;
    }
};