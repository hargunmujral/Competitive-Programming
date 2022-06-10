class Solution
{
public:
    vector<int> numberOfLines(vector<int> &widths, string s)
    {
        int sum = 0;
        int rows = 1;
        for (const auto &i : s)
        {
            sum += widths[i - 'a'];
            if (sum > 100)
            {
                sum = widths[i - 'a'];
                rows++;
            }
        }
        return vector<int>{rows, sum};
    }
};