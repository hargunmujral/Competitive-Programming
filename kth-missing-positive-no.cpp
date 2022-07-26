class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        for (const auto &i : arr)
            if (i <= k)
                k++;
        return k;
    }
};