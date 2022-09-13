class Solution
{
public:
    int smallestRangeI(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        return max(nums.back() - nums.front() - 2 * k, 0);
    }
};