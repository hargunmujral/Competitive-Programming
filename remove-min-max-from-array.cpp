class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int minIndex = 0, maxIndex = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[minIndex])
                minIndex = i;
            if (nums[i] >= nums[maxIndex])
                maxIndex = i;
        }
        int length = nums.size();
        return min(
            min(minIndex + 1 + length - maxIndex, max(minIndex, maxIndex) + 1),
            min(max(length - maxIndex, length - minIndex), maxIndex + 1 + length - minIndex));
    }
};