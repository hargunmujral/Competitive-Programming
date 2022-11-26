class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0, gmax = 0, r = height.size() - 1;
        while (l < r)
        {
            gmax = max(gmax, min(height[l], height[r]) * (r - l));
            height[l] < height[r] ? l++ : r--;
        }
        return gmax;
    }
};