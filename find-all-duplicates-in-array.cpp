class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (const auto &i : nums)
            map[i]++;
        vector<int> out;
        for (const auto &pair : map)
            if (pair.second > 1)
                out.push_back(pair.first);
        return out;
    }
};