class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int res = 0;
        int midsum = INT_MAX;
        int sum = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            int step = gas[i] - cost[i];
            sum += step;
            if (sum < midsum)
            {
                midsum = sum;
                res = i + 1;
            }
        }
        return sum >= 0 ? (res == gas.size() ? 0 : res) : -1;
    }
};