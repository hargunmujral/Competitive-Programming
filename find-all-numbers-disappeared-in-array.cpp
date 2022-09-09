class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        unordered_set<int> hashmap(nums.begin(), nums.end());
        vector<int> out;
        for (int i = 1; i <= nums.size(); i++)
            if (!hashmap.count(i))
                out.push_back(i);
        return out;
    }
};