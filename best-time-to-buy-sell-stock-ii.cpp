class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        vector<int> profit(prices.size() + 1, 0);
        int output = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            profit[i] = max(0, prices[i] - prices[i - 1]);
            output += profit[i];
        }
        return output;
    }
};