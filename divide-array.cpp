class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int j = 0; j < nums.size(); j += 2)
        {
            if ((nums[j] ^ nums[j + 1]) != 0)
                return false;
        }
        return true;
    }
};