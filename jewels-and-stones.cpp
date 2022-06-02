class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int out = 0;
        for (const auto &i : jewels)
        {
            out += count(stones.begin(), stones.end(), i);
        }
        return out;
    }
};