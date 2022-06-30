class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int bitLength = 1;
        int k = n;
        while (k >>= 1)
            (bitLength <<= 1) += 1;
        return bitLength ^ n;
    }
};