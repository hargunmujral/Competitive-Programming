class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (const auto &i : nums)
        {
            if (!map.count(i))
                map.insert({i, 1});
            else if (map.at(i)++ == nums.size() / 2)
                return i;
        }
        return nums[0];
    }
};