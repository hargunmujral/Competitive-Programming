class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        vector<int> dp = {0, 1};
        int maxi = n == 1;
        for (int i = 2; i <= n; i++)
        {
            i % 2 ? (dp.push_back(dp[i / 2] + dp[i / 2 + 1])) : (dp.push_back(dp[i / 2]));
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};