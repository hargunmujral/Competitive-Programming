class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        int count = 0;
        int globalMax = 0;
        for (int i = 0; i < rectangles.size(); i++)
        {
            int tempMax = min(rectangles[i][0], rectangles[i][1]);
            if (tempMax > globalMax)
            {
                count = 1;
                globalMax = tempMax;
            }
            else if (tempMax == globalMax)
                count++;
        }
        return count;
    }
};