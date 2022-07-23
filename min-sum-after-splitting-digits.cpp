class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> nums = {num % 10};
        while (num /= 10)
            nums.push_back(num % 10);
        sort(nums.begin(), nums.end());
        int new1 = 0;
        int new2 = 0;
        int iter = 0;
        while (iter < nums.size())
        {
            new1 *= 10;
            new1 += nums[iter++];
            if (iter < nums.size())
            {
                new2 *= 10;
                new2 += nums[iter++];
            }
        }
        return new1 + new2;
    }
};