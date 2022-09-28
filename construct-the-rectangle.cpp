class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int maxDiv = 1;
        for (int i = 1; i * i <= area; i++)
            if (area % i == 0)
                maxDiv = i;
        return {area / maxDiv, maxDiv};
    }
};