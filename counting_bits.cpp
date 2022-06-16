class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> out(n + 1, 0);
        for (int i = 1; i <= n; i++)
            out[i] = (out[i / 2] + i % 2);
        return out;
    }
};