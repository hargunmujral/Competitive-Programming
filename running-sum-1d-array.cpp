class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> out;
        int sum = 0;

        for (const auto &i : nums)
        {
            out.push_back(i + sum);
            sum += i;
        }
        return out;
    }
};