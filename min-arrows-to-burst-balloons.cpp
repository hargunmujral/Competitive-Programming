class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        int count = 1;
        int ind = 1;
        sort(points.begin(), points.end());
        int cur = points[0][1];
        while (ind < points.size())
        {

            if (points[ind][0] > cur)
            {
                count++;
                cur = points[ind][1];
            }
            cur = min(cur, points[ind++][1]);
        }
        return count;
    }
};
s