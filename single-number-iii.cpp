class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_set<int> set;
        for (const auto &i : nums)
        {
            if (!set.count(i))
                set.insert(i);
            else
                set.erase(i);
        }
        return vector<int>(set.begin(), set.end());
    }
};