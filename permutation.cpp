class Solution
{
public:
    void addArrays(vector<int> &nums, vector<vector<int>> &out, const int &size, int index)
    {
        if (index == size)
        {
            out.push_back(nums);
            return;
        };
        for (int i = index; i < size; i++)
        {
            swap(nums[index++], nums[i]);
            addArrays(nums, out, size, index);
            swap(nums[--index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> out;
        int index = 0;
        addArrays(nums, out, nums.size(), index);
        return out;
    }
};