class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        vector<long> out(3, LONG_MIN);
        for (int i = 0; i < nums.size(); i++)
        {
            if (out[0] < nums[i])
            {
                out[2] = out[1];
                out[1] = out[0];
                out[0] = nums[i];
            }
            else if (out[1] < nums[i] && out[0] > nums[i])
            {
                out[2] = out[1];
                out[1] = nums[i];
            }
            else if (out[2] < nums[i] && out[1] > nums[i])
                out[2] = nums[i];
        }
        return (out[1] > LONG_MIN && out[2] > LONG_MIN) ? out[2] : out[0];
    }
};