class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        int count = 0;
        int bits = 0;
        while (n)
        {
            if (++bits % 2 == 1 && (n & 1 == 1))
                count++;
            else if (n & 1 == 1)
                return false;
            n >>= 1;
        }
        return count == 1;
    }
};