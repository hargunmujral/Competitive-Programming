// This was a LeetCode Hard, and I took help from Alex Shao.
// His Github is linked here: https://github.com/alexshaoo

class Solution
{
public:
    int mergeStones(vector<int> &stones, int k)
    {
        if ((stones.size() - 1) % (k - 1))
            return -1;
        vector<int> prefixSum(stones.size() + 1, 0);
        vector<vector<int>> dp(stones.size() + 1, vector<int>(stones.size() + 1, 0));
        int end;
        for (int i = 0; i < stones.size(); i++)
            prefixSum[i + 1] = prefixSum[i] + stones[i];
        for (int size = k; size <= stones.size(); size++)
        {
            for (int start = 0; start <= stones.size() - size; start++)
            {
                end = start + size - 1;
                dp[start][end] = 1e5;
                for (int i = start; i < end; i += k - 1)
                    dp[start][end] = min(dp[start][end], dp[start][i] + dp[i + 1][end]);
                if ((end - start) % (k - 1) == 0)
                    dp[start][end] += (prefixSum[end + 1] - prefixSum[start]);
            }
        }
        return dp[0][stones.size() - 1];
    }
};