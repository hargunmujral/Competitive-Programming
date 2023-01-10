class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        int n = nums.size() / 2;
        while (n >= 1)
        {
            for (int i = 0; i < n; i++)
            {
                nums[i] = (i % 2 ? max(nums[2 * i], nums[2 * i + 1]) : min(nums[2 * i], nums[2 * i + 1]));
            }
            n /= 2;
        }

        return nums[0];
    }
};