class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int sum1 = 0, sum2 = 0, maxSum = 0, minSum = 0;
        for (const auto &i : nums)
        {
            sum1 += i;
            sum2 += i;
            sum1 = max(sum1, 0);
            sum2 = min(sum2, 0);
            maxSum = max(maxSum, sum1);
            minSum = min(minSum, sum2);
        }
        return max(maxSum, -minSum);
    }
};