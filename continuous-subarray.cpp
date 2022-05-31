class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int sum = 0, leftover = 0;
        unordered_set<int> set;
        for (const auto &i : nums)
        {
            sum = (sum + i) % k;
            if (set.find(sum) != set.end())
                return true;
            set.insert(leftover);
            leftover = sum;
        }
        return false;
    }
};