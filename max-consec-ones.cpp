class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int maxCount = 0;
        for (const auto &i : nums)
        {
            if (i == 1)
                maxCount = max(++count, maxCount);
            else
                count = 0;
        }
        return maxCount;
    }
};