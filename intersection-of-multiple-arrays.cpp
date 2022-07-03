class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        unordered_set<int> out(nums[0].begin(), nums[0].end());
        unordered_set<int> out2 = out;
        for (int i = 1; i < nums.size(); i++)
        {
            out2.clear();
            for (int j = 0; j < nums[i].size(); j++)
            {
                if (out.count(nums[i][j]))
                    out2.insert(nums[i][j]);
            }
            out = out2;
        }
        vector<int> v(out2.begin(), out2.end());
        sort(v.begin(), v.end());
        return v;
    }
};