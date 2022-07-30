class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int findGCD(vector<int> &nums)
    {
        int small = nums[0], large = nums[0];
        for (const auto &n : nums)
        {
            if (n < small)
                small = n;
            else if (n > large)
                large = n;
        }
        return gcd(small, large);
    }
};