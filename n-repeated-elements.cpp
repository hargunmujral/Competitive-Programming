class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        unordered_set<int> repetition;
        for (const auto &n : nums)
        {
            if (repetition.count(n))
                return n;
            repetition.insert(n);
        }
        return 0;
    }
};