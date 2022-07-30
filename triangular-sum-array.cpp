class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int maxIter = nums.size();
        while (--maxIter != 0)
            for (int i = 0; i < maxIter; i++)
                nums[i] = (nums[i] + nums[i + 1]) % 10;
        return nums[0];
    }
};