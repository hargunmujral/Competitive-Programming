class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        int i = 1;
        int k = n;
        int count = 0;
        while (k >>= 1)
        {
            i <<= 1;
            i += count++ % 2;
        }
        return (n == i);
    }
};