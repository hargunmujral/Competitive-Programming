class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int numsSum = 0;
        int size = nums.size();
        int trueSum = size * (size + 1) / 2;
        for (const int &i : nums)
        {
            numsSum += i;
        }
        return trueSum - numsSum;
    }
};