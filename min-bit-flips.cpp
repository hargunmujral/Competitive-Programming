class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int out = ((start % 2) != (goal % 2));
        while (start || goal)
            out += (((start >>= 1) % 2) != ((goal >>= 1) % 2));
        return out;
    }
};
