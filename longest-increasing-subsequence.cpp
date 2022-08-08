class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> dp(nums.size(), pow(10, 4) + 1);
        for (const auto &num : nums)
            *lower_bound(dp.begin(), dp.end(), num) = num;
        return find(dp.begin(), dp.end(), (pow(10, 4) + 1)) - dp.begin();
    }
};