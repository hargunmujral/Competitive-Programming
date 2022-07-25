class Solution
{
public:
    long long countExcellentPairs(vector<int> &nums, int k)
    {
        set<int> out(nums.begin(), nums.end());
        vector<int> v(32, 0);
        for (const auto &i : unordered_set(nums.begin(), nums.end()))
            v[__builtin_popcount(i)]++;

        long long ans = 0;
        for (int i = 0; i < 32; i++)
        {
            for (int j = 0; j < 32; j++)
            {
                ans += (i + j >= k ? v[i] * v[j] : 0);
            }
        }
        return ans;
    }
};