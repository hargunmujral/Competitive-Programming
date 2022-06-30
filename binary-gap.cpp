class Solution
{
public:
    int binaryGap(int n)
    {
        while (!(1 & n))
            n >>= 1;
        int localCount = 0;
        int maxCount = 0;
        while (n > 1)
        {
            n >>= 1;
            localCount++;
            if (n & 1 == 1)
            {
                maxCount = max(maxCount, localCount);
                localCount = 0;
            }
        }
        return maxCount;
    }
};