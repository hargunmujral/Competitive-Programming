class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        uint32_t sum = x ^ y;
        int count = 0;
        while (sum > 0)
        {
            sum &= sum - 1;
            count++;
        }
        return count;
    }
};