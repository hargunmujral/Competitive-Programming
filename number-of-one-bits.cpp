class Solution
{
public:
    // computationally heavy, can be improved upon
    int hammingWeight(uint32_t n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 2;
            n /= 2;
        }
        return sum;
    }

    // optimal solution
    class Solution
    {
    public:
        int hammingWeightOptimized(uint32_t n)
        {
            int sum = 0;
            while (n > 0)
            {
                n &= n - 1;
                sum++;
            }
            return sum;
        }
    };

    // Not optimal, but using recursion (would be ideal if we could pass by reference)
    class Solution
    {
    public:
        int hammingWeight(uint32_t n)
        {
            if (n == 0)
                return 0;
            return 1 + hammingWeight(n & n - 1);
        };
    };
};