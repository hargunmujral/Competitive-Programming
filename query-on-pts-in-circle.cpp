class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {
        vector<int> out(queries.size(), 0);
        int iterate = 0;
        for (const auto &i : queries)
        {
            for (const auto &j : points)
            {
                const int xdist = j[0] - i[0];
                const int ydist = j[1] - i[1];
                if (i[2] * i[2] >= (xdist * xdist + ydist * ydist))
                {
                    ++out.at(iterate);
                }
            }
            ++iterate;
        }
        return out;
    }
};