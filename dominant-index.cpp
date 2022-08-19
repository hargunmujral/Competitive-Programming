class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int largest = 1, second = 0;
        if (nums[largest] < nums[second])
            swap(largest, second);
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] > nums[largest])
            {
                second = largest;
                largest = i;
            }
            else if (nums[i] > nums[second])
                second = i;
        }
        return nums[largest] >= 2 * nums[second] ? largest : -1;
    }
};