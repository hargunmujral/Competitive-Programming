class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int i = 0;
        vector<int> out(nums.size(), 0);
        for (; i < nums.size(); i++)
            if (out[nums[i]]++ == 1)
                break;
        return nums[i];
    }
};