class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {
        bool toRemove = true;
        int prev = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= prev && toRemove)
            {
                toRemove = false;
                if (i == 1 || nums[i] > nums[i - 2])
                    prev = nums[i];
            }
            else if (nums[i] > prev)
                prev = nums[i];
            else
                return false;
        }
        return true;
    }
};