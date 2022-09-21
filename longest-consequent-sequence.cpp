class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int globMax = 1, locMax = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] + 1 == nums[i])
                locMax++;
            else if (nums[i - 1] == nums[i])
                continue;
            else
                locMax = 1;
            globMax = max(locMax, globMax);
        }
        return nums.size() ? globMax : 0;
    }
};