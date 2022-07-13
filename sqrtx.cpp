class Solution
{
public:
    int mySqrt(int x)
    {
        long ans = 0;
        long bit = 1 << 16;
        while (bit)
        {
            ans |= bit;
            if (ans * ans > x)
                ans ^= bit;
            bit >>= 1;
        }
        return ans;
    }
};