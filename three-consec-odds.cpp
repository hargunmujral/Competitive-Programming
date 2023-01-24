class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int res = 1;
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (res & arr[i - 1] & arr[i] & arr[i + 1])
                return true;
        }
        return false;
    }
};