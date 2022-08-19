class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        while (numSet.count(original))
            original *= 2;
        return original;
    }
    int findFinalValueBetterTime(vector<int> &nums, int original)
    {
        vector<int> set(1001, 0);
        for (const int &i : nums)
            set[i]++;
        while (original < 1001 && set[original])
            original *= 2;
        ;
        return original;
    }
};