class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> out(nums.size());
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            out.at(i) = (nums.at(i) + sum);
            sum += nums.at(i);
        }
        return out;
    }
};