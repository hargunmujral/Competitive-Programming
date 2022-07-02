class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        horizontalCuts.push_back(0);
        verticalCuts.push_back(0);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int maxh = 1;
        int maxw = 1;
        for (int i = 1; i < horizontalCuts.size(); i++)
        {
            maxh = max(horizontalCuts[i] - horizontalCuts[i - 1], maxh);
        }
        for (int i = 1; i < verticalCuts.size(); i++)
        {
            maxw = max(verticalCuts[i] - verticalCuts[i - 1], maxw);
        }
        return ((long)maxw * (long)maxh) % 1000000007;
    }
};