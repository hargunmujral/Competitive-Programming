class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> target;
        int j = 0;
        for (const auto &i : index)
            target.insert(target.begin() + i, nums.at(j++));
        return target;
    }
};