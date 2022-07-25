class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int neg = -INT_MAX + 1;
        int pos = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (num >= 0 && num < pos)
                pos = num;
            if (num < 0 && num > neg)
                neg = num;
        }
        return (-neg < pos ? neg : pos);
    }
};