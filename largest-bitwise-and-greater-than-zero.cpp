class Solution
{
public:
    void numOfBits(int num, vector<int> &nums)
    {
        int j = 0;
        while (num)
        {
            if (num & 1)
                nums[j]++;
            num >>= 1;
            j++;
        }
    }
    int largestCombination(vector<int> &candidates)
    {
        vector<int> nums(32, 0);
        for (const auto &i : candidates)
            numOfBits(i, nums);
        return *max_element(nums.begin(), nums.end());
    }
};