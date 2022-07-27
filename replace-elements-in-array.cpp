class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
            map[nums[i]] = i;
        for (const auto &i : operations)
        {
            nums[map[i[0]]] = i[1];
            map[i[1]] = map[i[0]];
        }
        return nums;
    }
};