class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() < 2)
            return 0;
        int buy = prices[0], sell = 0, cool = 0, temp = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            temp = cool;
            cool = max(cool, sell);
            sell = max(sell, prices[i] - buy);
            buy = min(buy, prices[i] - temp);
        }
        return (max(cool, sell));
    }
};