class Solution
{
public:
    int findComplement(int num)
    {
        int i = 1;
        while (i < num)
        {
            i <<= 1;
            i |= 1;
        }
        num ^= i;
        return num;
    }
};