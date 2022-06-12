class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int left = 0, right = 0, sum = 0, n = nums.size(), globalSum = 0;
        unordered_set<int> set;
        while (right < n)
        {
            while (set.find(nums[right]) != set.end())
            {
                sum -= nums[left];
                set.erase(nums[left++]);
            }
            sum += nums[right];
            set.insert(nums[right++]);
            globalSum = max(sum, globalSum);
        }
        return globalSum;
    }
};