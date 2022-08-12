class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> out;
        for (int i = 0; i < nums.size(); i++)
            out[nums[i]]++;
        for (const auto &i : out)
            if (i.second != 3)
                return i.first;
        return 0;
    }
};