class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int pivot = 0;
        int leftSum = 0, rightSum = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            rightSum += nums[i];
        }
        while (pivot < nums.size() - 1 && leftSum != rightSum)
        {
            leftSum += nums[pivot];
            rightSum -= nums[++pivot];
        }
        if (leftSum != rightSum)
            return -1;
        return pivot;
    }
};