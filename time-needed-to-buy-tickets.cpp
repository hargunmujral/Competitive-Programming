class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int sub = tickets[k];
        int count = sub;
        for (int i = 0; i < k; i++)
            count += min(tickets[i], sub);
        for (int i = k + 1; i < tickets.size(); i++)
            count += min(tickets[i], sub - 1);
        return count;
    }
};